/*** includes ***/

#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>


/*** defines ***/

#define ROL_VERSION "0.0.1"

#define CTRL_KEY(k) ((k) & 0x1f)


/*** data ***/

typedef struct editorConfig
{
	int cx, cy;
	int screenrows;
	int screencols;
	struct termios orig_termios;
}eConfig;

eConfig E;

/*** terminal ***/

void die(const char *s)
{
	write(STDOUT_FILENO, "\x1b[2J", 4);
	write(STDOUT_FILENO, "\x1b[H", 3);

	perror(s);
	exit(1);
}

void disableRawMode()
{
	if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &E.orig_termios) == -1) die("tcsetattr");
}

void enableRawMode()
{
	if (tcgetattr(STDIN_FILENO, &E.orig_termios) == -1) die("tcgetattr");
	atexit(disableRawMode);

	struct termios raw = E.orig_termios;

	raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
	raw.c_oflag &= ~(OPOST);
	raw.c_cflag |= (CS8);
	raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);

	raw.c_cc[VMIN] = 0;
	raw.c_cc[VTIME] = 1;

	if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw) == -1) die("tcsetattr");

}



char editorReadKey()
{
	int nread;
	char c;

	while ((nread = read(STDIN_FILENO, &c, 1) != 1)) if (nread == -1 && errno != EAGAIN) die("read");

	return (c);
}


int getCursorPos(int *rows, int *cols)
{
	char buff[32];
	unsigned int i = 0;

	if (write(STDOUT_FILENO, "\x1b[6n", 4) != 4) return (-1);

	while (i < sizeof(buff) - 1)
	{
		if (read(STDIN_FILENO, &buff[i], 1) != 1) break;
		if (buff[i] == 'R') break;
		i++;
	}
	buff[i] = '\0';


	if (buff[0] != '\x1b' || buff[1] != '[') return (-1);
	if (sscanf(&buff[2], "%d;%d", rows, cols) != 2) return (-1);
	printf("\r\nbuff[1]: '%s'\r\n", &buff[1]);


	return(0);

}

int getWindowSize(int *rows, int *cols)
{
	struct winsize ws;

	if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws) == -1 || ws.ws_col == 0)
	{
		if (write(STDOUT_FILENO, "\x1b[999C\x1b[999B", 12) != 12) return (-1);
		return (getCursorPos(rows, cols));
 		return (-1);
	}
	else
	{
		*cols = ws.ws_col;
		*rows = ws.ws_row;
		return (0);
	}
}


/*** append buffer ***/

typedef struct abuf{
	char *b;
	int len;
}abuf;

#define ABUF_INIT {NULL, 0}


void abAppend(abuf *ab, const char *s, int len){
	char *new = realloc(ab->b, ab->len + len);
	if (new == NULL) return;
	memcpy(&new[ab->len], s, len);
	ab->b = new;
	ab->len += len;
}



/*** output ***/

void editorDrawRows(abuf *ab)
{ 
        int y;
        for (y = 0; y < E.screenrows; y++)
        {
        	if (y == E.screenrows / 3)
        	{
        		char welcome[80];
        		int welcmlen = snprintf(welcome, sizeof(welcome), "Rol Editor --- version %s", ROL_VERSION);
        		if (welcmlen > E.screencols) welcmlen = E.screencols;
        		int padding = (E.screencols - welcmlen) / 2;
        		if (padding){
        			abAppend(ab, "~", 1);
        			padding--;
        		}
        		
        		while (padding--) abAppend(ab, " ", 1);
        		abAppend(ab, welcome, welcmlen);
        	}
        }
        	abAppend(ab, "~", 1);
        
        abAppend(ab, "\x1b[K", 3);
        if (y < E.screenrows - 1)
        {
		abAppend(ab, "\r\n", 2);
        }
}


void editorRefreshScreen() 
{
	abuf ab = ABUF_INIT;
	
	abAppend(&ab, "\x1b[?25l", 6);
	abAppend(&ab, "\x1b[H", 3);

	editorDrawRows(&ab);
	
	char buff[32];
	snprintf(buff, sizeof(buff), "\x1b[%d;%dH", (E.cy + 1), (E.cx + 1));
	abAppend(&ab, buff, strlen(buff));
	

	abAppend(&ab, "\x1b[?25h", 6);

	write(STDOUT_FILENO, ab.b, ab.len);
	
	abFree(&ab);
}



/*** input ***/

void editorMoveCursor(char key) {

	switch (key) {
	case 'a':
		E.cx--;
		break;
	case 'd':
		E.cx++;
		break;
	case 'w':
		E.cy--;
		break;
	case 's':
		E.cy++;
		break;
	
	}
}


void editorProcessKeyPress()
{
	char c = editorReadKey();

	switch (c)
	{
		case CTRL_KEY('q'):
			write(STDOUT_FILENO, "\x1b[2J", 4);
			write(STDOUT_FILENO, "\x1b[H", 3);
			exit(0);
			break;
		case 'w':
		case 's':
		case 'a':
		case 'd':
			editorMoveCursor(c);
			break;	
	}
}










/*** init ***/


void initEditor() {
	E.cx = 0;
	E.cy = 0;
if (getWindowSize(&E.screenrows, &E.screencols) == -1) 
	die("getWindowSize");}




int main()
{
	enableRawMode();
	initEditor();


	while (1)
	{
		editorRefreshScreen();
		editorProcessKeyPress();
	}
	return (0);

}

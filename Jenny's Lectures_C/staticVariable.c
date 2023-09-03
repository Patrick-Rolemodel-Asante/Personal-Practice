#include <stdio.h>
void incrementAndPrint() 
{
static int counter = 0; //retain their values bn function calls
counter++;
printf("counter value=%d\n", counter);
}
int main()
{
incrementAndPrint();
incrementAndPrint() ;
incrementAndPrint() ;
return 0;
}

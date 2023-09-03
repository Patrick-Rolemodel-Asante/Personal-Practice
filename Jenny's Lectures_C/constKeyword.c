#include <stdio.h>
int main()
{
const int x=10; //can't reassign value to this variable cus it is const
// x=x+1; error: assignment of read-only variable ‘x’ 
printf("const x=%d\n", x);
return 0;
}

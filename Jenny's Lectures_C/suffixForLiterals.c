#include <stdio.h>
int main()
{
float a=10.5f;
double b =10.515;
long double c =10.32l;
float d =2.1e4f; //21000
double e=200.1e-80; //2000x10^-80
double f=0x1a.1p2; //104.25

printf("%g %g %Lg %g %g %g\n", a,b,c,d,e,f);

return 0;
}

#include <stdio.h>

void foo(void)
{
int a;  printf("%d\n", a);
}

void bar(void)
{
int b = 42;
}

int main(void)
{
bar();
foo();
}

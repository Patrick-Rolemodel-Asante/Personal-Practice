#include <stdio.h>
int main()
{
int num =42;
int *ptr = &num;

printf("Memory Address: %p\n", (void *)&num);
printf("Value: %d\n", *ptr);

return 0;
}


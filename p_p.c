#include <stdio.h>

int main()
{
    int x = 25;
    int *p;
    int **pp;

    p = &x;
    pp = &p;

    printf("Value of x = %d\n", x);
    printf("Value using *p = %d\n", *p);
    printf("Value using **pp = %d\n", **pp);

    printf("\nAddress of x = %p\n", (void *)&x);
    printf("Address stored in p = %p\n", (void *)p);
    printf("Address of p = %p\n", (void *)&p);
    printf("Address stored in pp = %p\n", (void *)pp);

    return 0;
}
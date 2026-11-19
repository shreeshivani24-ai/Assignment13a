#include <stdio.h>

int main()
{
    int a;
    int *p;

    printf("Enter an integer: ");
    scanf("%d", &a);

    p = &a;

    printf("Original value = %d\n", a);

    *p = *p + 10;

    printf("Modified value = %d\n", a);

    return 0;
}
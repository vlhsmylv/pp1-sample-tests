// What number will be printed?

#include <stdio.h>

int main()
{
    int x = 3;
    switch (x)
    {
    case 1:
        printf("%d", x);
    case 2:
        printf("%d", x);
    case 3:
        printf("%d", x);
    default:
        printf("%d", x);
    }
    printf("%d\n", x);
}
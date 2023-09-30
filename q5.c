// What number will be printed?

#include <stdio.h>

int main()
{
    int x = 5;
    switch (x)
    {
    case 5:
        printf("%d", x);
    case 8:
        printf("%d", x + 1);
        break;
    default:
        printf("%d", x + 2);
        break;
    }
    printf("%d\n", x);
}
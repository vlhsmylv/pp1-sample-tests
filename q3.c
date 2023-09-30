// What number will be printed?

#include <stdio.h>

int main(void)
{
    int x = 0;
    switch (x)
    {
    case 1:
        printf("%d", x);
        break;
    case 2:
        printf("%d", x + 1);
        break;
    default:
        printf("%d", x + 2);
        break;
    }
    printf("%d\n", x);
}

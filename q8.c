// What is the output for the next code?

#include <stdio.h>

int main()
{
    int x = 3;
    switch (x)
    {
    case 4:
        x = x + 1;
    case 0:
        x = x + 1;
        break;
    case 6:
        x = x + 1;
    default:
        x = x + 1;
        break;
    }
    printf("%d\n", x);
}
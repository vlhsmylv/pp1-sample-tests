// What is the output for the next code?

#include <stdio.h>

int main()
{
    int x = 6;
    switch (x)
    {
    case 6:
        x = x + 3;
        break;
    default:
        x = x + 1;
    }
    printf("%d\n", x);
}
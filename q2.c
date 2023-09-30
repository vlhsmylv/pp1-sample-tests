// What is the output for the next code?

#include <stdio.h>

int main(void)
{
    int x = 5, y = 0;
    switch (x)
    {
    case 5:
        y = x + 3;
    default:
        y = x + 5;
    }
    printf("%d\n", y);
}
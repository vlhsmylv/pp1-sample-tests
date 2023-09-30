// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 3, b = 7;
    if (a > b || a < b - 4)
        printf("%d", a + b + 1);
    else
        printf("%d", a * b);
}
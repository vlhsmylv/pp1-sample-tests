// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 9, b = 4, res;
    if (a % 2 > b % 3)
        res = a * b;
    else
        res = a / b;
    printf("%d\n", res);
}
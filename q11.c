// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 17, b = 6;

    int res = (a > b) + (b % a) + (a / b);

    printf("%d\n", res);

    return 0;
}
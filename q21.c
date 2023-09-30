// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 7, b = 13;

    int res = b / a + b % a + (a != b) + (a > b / 2);

    printf("%d\n", res);

    return 0;
}
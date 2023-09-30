// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 3, b = 11;

    int res = b / a + b % a + (a < b) + (a != b);

    printf("%d\n", res);

    return 0;
}
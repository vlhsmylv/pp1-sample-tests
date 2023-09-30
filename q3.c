// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 7, b = 16;

    int res = (a > b) + (b / 2 > a) + (b / a);

    printf("%d\n", res);

    return 0;
}
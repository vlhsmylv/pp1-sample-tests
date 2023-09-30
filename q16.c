// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 7, b = 1;

    int res = a++ - b--;

    printf("%d\n", a - res);

    return 0;
}
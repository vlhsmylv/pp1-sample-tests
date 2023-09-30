// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 7, b = 3, res;
    if (++a >= b--)
        res = --a + ++b;
    else
        res = a-- + --b;
    printf("%d\n", res - a);
}
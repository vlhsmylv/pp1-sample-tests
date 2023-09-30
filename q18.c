// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 5, b = 6, res;
    if (a++ >= --b)
        res = a++ + ++b;
    else
        res = --a + --b;
    printf("%d\n", res + b);
}
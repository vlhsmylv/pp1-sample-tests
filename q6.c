// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 5, b = 7, res;
    res = (a > b / 2) + (a / 2 < b) + (++a == --b);
    printf("%d\n", res);
}
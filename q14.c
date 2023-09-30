// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 3, b = 4, res;
    res = (a++ < --b) ? a + b : a - b;
    printf("%d\n", res - b);
}
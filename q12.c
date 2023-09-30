// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 4, b = 8, res;
    res = (a == b / 2) + (2 * a != --b) + (a + 3 == b);
    printf("%d\n", res);
}
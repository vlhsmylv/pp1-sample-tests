// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 8, b = 3;

    int res = a++ - --b;

    printf("%d\n", res - b);

    return 0;
}
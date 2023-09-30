// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    int res = (a < b) + (a != b) + (a > b); 

    printf("%d\n", res);

    return 0;
}
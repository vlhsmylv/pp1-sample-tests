// What is the output for the next code?

#include <stdio.h>

int main()
{
    int a = 2, b = 5, res;
    if (a <= b / 2)
        if (a > b / 3)
            res = a + 6;
        else
            res = b - a;
    else 
        printf("%d\n", res);
    printf("%d\n", res);
}
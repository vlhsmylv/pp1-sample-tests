// What is the output for the next code?

#include <stdio.h>

int main(void) 
{
    int a = 4, b = 7;
    if(a > b && a < b) 
        printf("%d", a + b);
    else 
        printf("%d", a * b);
}
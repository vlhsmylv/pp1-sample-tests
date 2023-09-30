// What is the output for the next code?

#include <stdio.h>

int main()
{
    long long a = 2; 

    printf("%d", sizeof(double) * sizeof(a));

    return 0;
}
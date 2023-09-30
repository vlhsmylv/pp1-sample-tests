// What is the output for the next code?

#include <stdio.h>

int main() {
    short int a = 25;

    printf("%d", sizeof(double) * sizeof(a));

    return 0;
}
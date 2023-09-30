// What is the output for the next code?

#include <stdio.h>

int main() {
    int a = 4, b = 8, res;
    res = (a > b) ? a++ : --b;
    printf("%d\n", res + a);
}
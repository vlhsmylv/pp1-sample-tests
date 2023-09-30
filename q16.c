// What is the output for the next code?

#include <stdio.h>

int main()
{
    int x = 0;
    switch (x)
    {
    case 1:
        x = x + 2;
    case 0:
        x = x + 2;
    case 2:
        x = x + 1;
    }
    printf("%d\n", x);
}
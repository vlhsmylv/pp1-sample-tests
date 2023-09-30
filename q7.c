// What is the output for the next code?

#include <stdio.h>

int main()
{
    int age = 20;
    int productPrice = 100;
    if(age > 20) 
        productPrice = productPrice - 15; 
    if(age < 20) 
        productPrice = productPrice - 5; 
    else 
        productPrice = productPrice - 10;
    printf("%d", productPrice);
}
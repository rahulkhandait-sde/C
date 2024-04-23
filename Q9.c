// Lets assume x and y are two character variables. We have assigned '5' and '6' to them respectively. Print the product of x and y.

#include <stdio.h>
int main (){
    char x= '5';
    char y= '6';
    printf("Product of x and y: %d", (x-'0')*(y-'0'));
    return 0;
}
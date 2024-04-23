// Write a C program to convert decimal number to binary number and vice versa.

#include <stdio.h>
#include <math.h>

int decimalToBinary(int decimal) {
    int binary = 0, i = 0;
    while (decimal > 0) {
        binary += (decimal % 2) * pow(10, i);
        decimal /= 2;
        i++;
    }
    return binary;
}

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;
    while (binary > 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int decimal, binary;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    binary = decimalToBinary(decimal);
    printf("Binary number: %d\n", binary);
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    decimal = binaryToDecimal(binary);
    printf("Decimal number: %d\n", decimal);
    return 0;
}

// Output:
// Enter a decimal number: 10
// Binary number: 1010
// Enter a binary number: 1010
// Decimal number: 10

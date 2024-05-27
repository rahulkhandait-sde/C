#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100], C[101];
    printf("Enter the first string: ");
    gets(A);
    int len1 = strlen(A);
    printf("Enter the second string: ");
    gets(B);
    int len2 = strlen(B);
    int l = len1 -1, carry = 0, temp;
    while (l>=0){
        temp = (A[l] - '0') + (B[l] - '0') + carry;
        C[l+1] = '0'+ (temp%2);
        carry = temp/2;
        l--;
    }
    C[0] = '0' + carry;
    C[len1+1] = '\0';
    printf("The sum of the two binary numbers is: %s\n", C);
}

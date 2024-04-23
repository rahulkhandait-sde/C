// Write a C program to print a table for all the numbers  from 1 to 10. Press N for the table of Next number, P for the previous number, and Q to quit. Using System("cls") to clear the screen after every input. And  also add a condition to print "Invalid input" if the input is not N, P, or Q. 

#include <stdio.h>
#include <stdlib.h>
int main (){
    char input;
    int num=1;
    while (1){
        printf("Press N for the table of Next number, P for the previous number, and Q to quit: ");
        scanf("%c", &input);
        if (input=='N'){
            system("cls");
            for (int i=1; i<=10; i++){
                printf("%d x %d = %d\n", num, i, num*i);
            }
            num++;
        }
        else if (input=='P'){
            system("cls");
            for (int i=1; i<=10; i++){
                printf("%d x %d = %d\n", num, i, num*i);
            }
            num--;
        }
        else if (input=='Q'){
            break;
        }
        else{
            printf("Invalid input\n");
        }
    }
    return 0;
}
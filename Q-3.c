#include <stdio.h>

int main(){
    int i = 0;
    char c ='a';
    while (i<2){
        i++;
        switch (c){
            case 'a':
                printf("%c",c);
                break;
        }
    }
    printf("after loop\n");
    return 0;
}
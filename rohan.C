#include<stdio.h>
#include<math.h>
void addition();
void substraction();
void multiplication();
void divition();
void square();
void poweratob();
void factorial();
void cube();
void squareroot();
void modulus();
int main(){
    int choice;
    printf("enter 1 for addition\nenter 2 for subtraction\nenter 3 for multiplication\n");
    printf("enter 4 for divition\nenter 5 for square\nenter 6 for poweratob\nenter 7 for factorial\n");
    printf("enter 8 for cube\nenter 9 for square root\nenter 10 for modulus\n\n");
    printf("\nenter choice number:\n\n");
    scanf("%d",&choice);
    char note[]="****press 0 to quite****";
    switch(choice){
        case 1:
           addition();
           break;
        case 2:
           substraction();
           break;
        case 3:
           multiplication();
           break;
        case 4:
           divition();
           break;
        case 5:
           square();
           break;
        case 6:
           poweratob();
           break;
        case 7:
           factorial();
           break;
        case 8:
           cube();
           break;
        case 9:
           squareroot();
           break;
        case 10:
           modulus();
           break;
        case 0:
           exit(0);
        default :
           printf("%s",note);
                                         
    }
   
    return 0;
}

void addition(){
    float a,b;
    printf("enter two number which you want to add:");
    scanf("%f%f",&a,&b);
    printf("the sum of this two number is:%.1f",a+b);

}
void substraction(){
    float a,b;
    printf("enter two number which you want to subtract:");
    scanf("%f%f",&a,&b);
    printf("the answer is:%.1f",a-b);

}
void multiplication(){
    float a,b;
    printf("enter two number which you want to multiply:");
    scanf("%f%f",&a,&b);
    printf("the answer is:%.1f",a*b);

}
void divition(){
    float a,b;
    printf("enter two number which you want to divide:");
    scanf("%f%f",&a,&b);
    printf("the answer is:%.1f",a/b);

}
void square(){
    float a,b;
    printf("enter the number which you want to square:");
    scanf("%f",&a);
    b= pow(a,2);
    printf("the square of %f is:%.1f",a,b);

}
void poweratob(){
    float a,b,c;
    printf("enter the number first and then the power:");
    scanf("%f%f",&a,&b);
    c= pow(a,b);
    printf("the answer is:%.1f",c);

}
void squareroot(){
    float a,b;
    printf("enter the number which you want to square:");
    scanf("%f",&a);
    b=sqrt(a);
    printf("the square root of %fis:%.1f",a,b);

}
void cube(){
    float a,b;
    printf("enter the number which you want to cube:");
    scanf("%f",&a);
    b= pow(a,3);
    printf("the cube of %f is:%.1f",a,b);

}
void modulus(){
    int a,b;
    printf("enter the number and then enter the number  whose respect you want to get module :");
    scanf("%d%d",&a,&b);
    printf("the answer is:%d",a%b);

}
void factorial(){
    int i,a,f;
    f=1;
    printf("enter the number for factorial:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        f=f*i;
    }
     printf("the answer is %d",f);
}
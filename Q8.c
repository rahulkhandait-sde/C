#include <stdio.h>
int main (){
	char input;
	printf("Input any UPPER CASE character: ");
	scanf("%C", &input);
	if (input>= 'A' && input<='Z'){
		char lower_case= int(input) + ('a'-'A');
		printf("Corresponding Lower Case: %c", lower_case);
	}
	else{
		printf("Invalid input");
	}
	return 0;
}

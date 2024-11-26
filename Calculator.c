#include <stdio.h>

void calc();
void advCalc();
void main() {
	int key;
	
	do {
		printf("Please select an option from below :\n");
		printf("Select 1 for Ordinary Calculator.\n");
		printf("Select 2 for Advanced Bracket Calculator.\n");
		printf("Select 3 for Exit.\n");
		printf("\nPlease enter an option and press enter : ");
		scanf("%d", &key);
		
		if(key == 1) {
			calc();
		} else if(key == 2) {
			advCalc();
		} else {
			printf("\nThank You !!!");
			exit(0);
		}
	} while(key == 1 || key == 2 || key == 3);
	
	printf("Invalid choice.");
}

void calc() {
	int a, b, c, i;
	char* exp[100];
	int stack[100];
	printf("Ordinary Calculator is selected.\n");
	printf("Enter an expression : ");
	do {
		scanf("%s", exp);
		for(i = 0;i < sizeof(exp);i++) {
			
		}
	}
}

#include <stdio.h>

void main() {
	// Declarations and Initializations
	char name[100];
	int l = 0, s = 0;
	char ch;
	
	// Inputs
	printf("Enter your name : ");
	fgets(name, 100, stdin);
	
	printf("Hi! %s\n", name);
	printf("The initials of your name is : ");
	
	/*
	Traversing the entire string upto Null character. While traversing if it is the first character of the string then
	store it in a variable and do nothing while a space comes. After finding a space or Null character, display the 
	first character and do nothing if there is multiple spaces. If a character is found the again store it and traverse
	for a space or Null character. In the end, after the Null is found print the character stored. In this program 
	there is a feature that despite of the input, the output characters will be in uppercase. There is a code 
	snippet commented of printing the last name in full.
	*/
	
	// Outputs
	while(name[l] != NULL) {
		if(l == 0) {
			ch = name[l];
		} else if(name[l] == ' ') {
			while(name[l] == ' ') {
				s = l;
				l++;
			}
			if(ch >= 97 && ch <= 122) {
				printf("%c. ", ch-32);
			} else {
				printf("%c. ", ch);
			}
			ch = name[l];
		}
		l++;
	}
	
	
	if(ch >= 97 && ch <= 122) {
		printf("%c. ", ch-32);
	} else {
		printf("%c. ", ch);
	}
	
	// In case you want to print the surname in full
	/*
	
	printf("\nYour name is : ");
	ch = name[++s];
	if(ch >= 97 && ch <= 122) {
		printf("%c", ch-32);
	} else {
		printf("%c", ch);
	}
	s++;
	while(name[s] != '\0') {
		printf("%c", name[s++]);
	}
	
	*/
	
}

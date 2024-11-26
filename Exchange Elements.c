#include <stdio.h>
#include <stdlib.h>

void displayArray(int *arr, int s1, int s2);
void verticalExchange(int *arr, int s1, int s2);
void horizontalExchange(int *arr, int s1, int s2);
void randomExchange(int *arr, int s1, int s2);


void main() {
	int n = 8, i, j, choice, s1, s2;
	int arr[8][8] = {{1, 2, 3, 4, 2, 17, 1, 10},
					 {0, 2, 6, 9, 9, 70, 6, 11},
					 {10, 11, 3, 4, 2, 1, 8, 0},
					 {8, 8, 1, 14, 5, 5, 81, 9},
					 {3, 0, 9, 40, 6, 9, 10, 6},
					 {0, 3, 4, 10, 2, 9, 7, 33},
					 {5, 4, 3, 6, 55, 3, 80, 1},
					 {6, 20, 2, 5, 2, 7, 18, 0}};
					 
	s2 = sizeof(arr[0])/sizeof(int);
	s1 = sizeof(arr)/(s2*sizeof(int));
	displayArray(arr, s1, s2);
	
	
	do {
		printf("\n\nThe options are :");
		printf("\n1 : Vertically, Row 1 <-> Row 8 and Row 2 <-> Row 7 and so on.");
		printf("\n2 : Horizontally, Column 1 <-> Column 4 and Column 5 <-> Column 8 and so on.");
		printf("\n3 : Randomly, without repititions and involving all.");
		printf("\n Any other : Exit.");
		printf("\n\nEnter your choice : ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1 :
				verticalExchange(arr, s1, s2);
				displayArray(arr, s1, s2);
				break;
			case 2 :
				horizontalExchange(arr, s1, s2);
				displayArray(arr, s1, s2);
				break;
			case 3 :
				randomExchange(arr, s1, s2);
				displayArray(arr, s1, s2);
				break;
			default :
				printf("Thank You!");
				return;
		}
	} while(choice >= 1 && choice <= 3);
}

void displayArray(int *arr, int s1, int s2) {
	int size2 = s2, i, j;
	int size1 = s1;

	printf("The %dx%d integer array\n", size1, size2);
	for(i = 0;i < s1;i++) {
		for(j = 0;j < s2;j++) {
			printf("%d\t", *((arr+i*s2) + j));
		}
		printf("\n");
	}
}

void verticalExchange(int *arr, int s1, int s2) {
	int i = 0, j = 7, a;
	int r = s1;
	int c = s2;
	while(i <= j) {
		for(a = 0;a < r;a++) {
			arr[i * s2 + a] ^= arr[j * s2 + a];
            arr[j * s2 + a] ^= arr[i * s2 + a];
            arr[i * s2 + a] ^= arr[j * s2 + a];
		}
		i++;
		j--;
	}
}

void horizontalExchange(int *arr, int s1, int s2) {
	int i = 0, j = 3, a, temp;
	
	while(i <= j) {
		for(a = 0;a < s2;a++) {
			arr[a * s2 + i] ^= arr[a * s2 + j];
            arr[a * s2 + j] ^= arr[a * s2 + i];
            arr[a * s2 + i] ^= arr[a * s2 + j];
		}
		i++;
		j--;
	}
	
	i = 4, j = 7;
	while(i <= j) {
		for(a = 0;a < s2;a++) {
			temp = *((arr+a*s2) + i);
			*((arr+a*s2) + i) = *((arr+a*s2) + j);
			*((arr+a*s2) + j) = temp;
		}
		i++;
		j--;
	}
}

void randomExchange(int *arr, int s1, int s2) {
	int r1, r2, r3, r4, i, j, count = 0;
	int testArray[8][8];
	for(i = 0;i < s1;i++) {
		for(j = 0;j < s2;j++) {
			testArray[i][j] = -1;
		}
	}
	while(1) {
		r1 = (rand() % 8);
		r2 = (rand() % 8);
		r3 = (rand() % 8);
		r4 = (rand() % 8);
		if(testArray[r1][r2] == -1 && testArray[r3][r4] == -1) {
			arr[r1 * s2 + r2] ^= arr[r3 * s2 + r4];
            arr[r3 * s2 + r4] ^= arr[r1 * s2 + r2];
            arr[r1 * s2 + r2] ^= arr[r3 * s2 + r4];
            count++;
		}
		if(count == 32) { 
		break;
		}
	}
}

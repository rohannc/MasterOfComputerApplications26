#include <stdio.h>

void main() {
	int a, i, sq, j, odd = 1, sumOdd = 1;
	
	printf("Enter the number of square numbers starting from 1 : ");
	scanf("%d", &a);
	
	for(i = 0;i < a;i++) {
		sq = (i+1) * (i+1);
		printf("%d : ", sq);
		for(j = 0;sumOdd <= sq;j++) {
			printf("%d\t", odd);
			odd += 2;
			sumOdd += odd;
		}
		printf("\n");
		sumOdd = 1;
		odd = 1;
	}
}

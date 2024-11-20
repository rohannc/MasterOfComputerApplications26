#include <stdio.h>

void fibo(int n);

void main() {
	int n;
	
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	
	fibo(n);
}

void fibo(int n) {
	int f1 = 0, f2 = 1, f3, j;
	if(n == 0) {
		printf("Nothing to print.");
	} else if(n == 1) {
		printf("%d\t", f1);
	} else if(n == 2) {
		printf("%d\t%d\t", f1, f2);
	} else {
		printf("%d\t%d\t", f1, f2);
		for(j=0;j<n-2;j++) {
			f3 = f1+f2;
			printf("%d\t", f3);
			f1 = f2;
			f2 = f3;
		}
	}
}

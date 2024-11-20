#include <stdio.h>

int armstrong(int n);

void main() {
	int n;
	
	printf("Enter a number : ");
	scanf("%d", &n);
	if(armstrong(n) == 1)
		printf("%d is an Armstrong Number.", n);
	else
		printf("%d is not an Armstrong Number.", n);
}

int armstrong(int n) {
	int i, x, product = 1, res = 0, num = n, numOfDigits = 0;
	while(num != 0) {
		num = num / 10;
		numOfDigits += 1;
	}
	num = n;
	while(num != 0) {
		x = num % 10;
		num /= 10;
		for(i = 0;i < numOfDigits;i++) {
			product *= x;
		}
		res += product;
		product = 1;
	}
	if(n == res) {
		return 1;
	} else {
		return 0;
	}
}


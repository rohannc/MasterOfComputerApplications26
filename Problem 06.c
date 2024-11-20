#include <stdio.h>
#define LIMIT 20

int isPrime(int n);
void displayFactors(int n);

void main() {
	int i;
	for(i=1;i<=LIMIT;i++) {
		if(!isPrime(i)) {
			printf("%d :", i);
			displayFactors(i);
			printf("\n");
		}
	}
}

int isPrime(int n) {
	int a = 0, i;
	for(i=2;i*i<=n;i++) {
		if((n % i) == 0) {
			a++;
		}
	}
	if(a != 0) {
		return 0;
	} else {
		return 1;
	}
}

void displayFactors(int n) {
	int i;
	for(i=1;i<=n;i++) {
		if(n%i == 0) {
			printf("\t%d", i);
		}
	}
	printf(".");
}

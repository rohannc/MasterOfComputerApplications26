#include <stdio.h>
#define LIMIT 100

int isPrime(int n);

void main() {
	int i, count = 0;
	for(i=0;i<LIMIT;i++) {
		if(isPrime(i) == 1) {
			count++;
			printf("%d\t", i);
		}
	}	
	printf("\nThe count of primes below %d is : %d", LIMIT, count);
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

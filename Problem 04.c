#include <stdio.h>

void main() {
	int i, j, n, count = 0, currval, index = 0, occ = 0, numOfDup = 0;
	
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++) {
		printf("Enter item %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<n;i++) {
		currval = arr[i];
		occ = 0;
		for(j=0;j<n;j++) {
			if(arr[j] == currval) {
				occ++;
			}
		}
		if(occ > 1) {
			numOfDup++;
		}
	}
	
	int arrnew[n-numOfDup];
	for(i=0;i<n;i++) {
		currval = arr[i];
		for(j=0;j<index;j++) {
			if(arrnew[j] == currval) {
				break;
			}
		}
		if(j==index) {
			arrnew[index] = arr[i];
			index++;
		}
	}
	
	printf("The array after removing duplicates : ");
	for(i=0;i<index;i++) {
		printf("%d\t", arrnew[i]);
	}
}

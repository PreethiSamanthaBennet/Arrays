#include <stdio.h>

int main() {
	int count = 0;
	int arr[100];
	int size;
	int i, j;
	
	printf("enter the array size:\n ");
	scanf("%d", &size);
	
	printf("enter the elements:\n ");
	for(i = 0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	for(i = 0; i<size; i++){
		for(j = i + 1; j < size; j++){
			if(arr[i] == arr[j]){
				count++;
				break;
			}
		}
	}
	printf("Number of duplicate elements are: %d\n", count + 1);
	
	return 0;
}

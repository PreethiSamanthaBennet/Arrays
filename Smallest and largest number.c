#include <stdio.h>

int main() {
	int arr[100], n,i,small,large;
	printf("Enter the number of elements: \n");
	scanf("%d", &n);
	
	for (i = 0; i<n ;i++){
		printf("The element is: %d \n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	small = arr[0];
	large = arr[0];
	
	for(i = 1 ; i<n ; i++){
		
		if(arr[i]< small){
			small = arr[i];
		}
			
		if(arr[i]>large){
			large = arr[i];
		}
	}
	
	printf("The largest number is: %d \n", large);
	printf ("The smallest number is: %d \n", small);
	return 0;
}

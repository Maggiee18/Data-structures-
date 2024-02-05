#include<stdio.h>
int main(){
	
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int i, arr[i];
	printf("Enter the elements of the array:\n");
	for (i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Elements in the array are: \n");
	for(i=0;i<n;i++){
		printf("%d", arr[i]);
	}
	
	return 0;
	
}

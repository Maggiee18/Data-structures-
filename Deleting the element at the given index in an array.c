#include<stdio.h>
int main(){
	
	int i, n, index;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter %d elements for the array: \n", n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the index of the element to delete(0 to %d): ",n-1);
	scanf("%d", &index);
	
	if(index<0 || index>=n){
		printf("Invalid index! Enter a valid index \n");
	}
	else{
		for(i=index;i<n-1;i++){
			arr[i]=arr[i+1];
		}
		n--;
		printf("Array after deleting the element : ");
		for(i=0;i<n;i++){
			printf("%d", arr[i]);
		}
	}
	
	return 0;
	
}

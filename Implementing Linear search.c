#include<stdio.h>
int main(){
	
	int n,i,x;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter %d elements of the array: \n", n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the element you want to search: ");
	scanf("%d", &x);
	
	int found=0;
	for (i=0;i<n;i++){
		if(arr[i]==x){
			printf("%d is found at index %d", x,i);
			found=1;
			break;
		}
	}
	
	if(!found){
		printf("%d is not found in the array\n", x);
	}
	
	return 0;
	
}

#include<stdio.h>
int main(){
	
	int n,i,j;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter %d elements for the array: \n", n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Unique elements in the array : ");
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if (arr[i]==arr[j]){
				break;
			}
		}
		if(i==j){
			printf("%d", arr[i]);
		}
	}
	return 0;
}

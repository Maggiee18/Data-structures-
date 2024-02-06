#include<stdio.h>
int main(){
	
	int n,sum=0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	int i;
	printf("Enter %d elements: \n",n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	printf("Sum of the elements is %d", sum);
	
	return 0;
	
}

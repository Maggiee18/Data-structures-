#include<stdio.h>
int main(){
	
	int i,n,pos,newElement;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	int arr[n+1];
	printf("Enter %d elements for the array: \n", n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the position to insert the new element: ");
	scanf("%d", &pos);
	
	printf("Enter the new element to insert: ");
	scanf("%d", &newElement);
	
	for(i=n;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	
	arr[pos-1]=newElement;
	printf("The array after inserting the new element is: ");
	for(i=0;i<=n;i++){
		printf("%d", arr[i]);
	}
	
	return 0;
	
}

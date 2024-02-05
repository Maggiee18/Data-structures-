#include<stdio.h>
int main()
{ 
int n;
printf("Enter the numbers of elements:");
scanf("%d",&n);
 
 int arr[n],i;
 printf("Enter any %d elements : \n",n);
 for(i=0;i<n;i++){
 	scanf("%d",&arr[i]);

 }
 printf("The elements in the reverse order:");
 for(i=n-1;i>0;i--){
 	printf("%d",arr[i]);
 }
 return 0;
}

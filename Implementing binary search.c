#include<stdio.h>
int main()
{
    int i,n,search, first, last, middle;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements (in ascending order): ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
        
    printf("Enter the element you want to search: \n");
    scanf("%d", &search);
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    
    while(first <= last)
    {
        if(arr[middle]<search)
            first = middle+1;
        else if(arr[middle]==search)
        {
            printf("\n%d found at Position %d", search, middle+1);
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    
    if(first>last)
        printf("\n%d is not found in the given Array", search);

    return 0;
}

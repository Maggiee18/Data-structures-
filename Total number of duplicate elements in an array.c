#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
	int i,j; 

    printf("Enter %d elements for the array: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; 
                break; 
            }
        }
    }

    printf("The total number of duplicate elements in the array is %d\n", count);

    return 0;
}

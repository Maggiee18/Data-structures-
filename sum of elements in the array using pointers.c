#include <stdio.h>

int sum_Array(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }

    return sum;
}

int main() {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sum_Array(arr, size);

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}

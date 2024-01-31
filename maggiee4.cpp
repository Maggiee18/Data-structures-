#include <stdio.h>

// Function to calculate the power of a number
int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

// Function pointer declaration
typedef int (*PowerFunction)(int, int);

int main() {
    int base, exponent;
    PowerFunction powerFunc = &power;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = powerFunc(base, exponent);

    printf("The result is: %d\n", result);

    return 0;
}

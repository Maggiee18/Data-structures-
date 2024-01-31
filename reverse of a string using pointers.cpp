#include <stdio.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str;

    // Move the end pointer to the end of the string
    while (*end != '\0') {
        end++;
    }
    end--;

    // Swap characters from start to end
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

#include <stdio.h>

void reverse_String(char *string) {
    char *start = string;
    char *end = string;

    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char string[100];

    printf("Enter a string: ");
    scanf("%s", string);

    reverse_String(string);

    printf("Reversed string is %s\n", string);

    return 0;
}

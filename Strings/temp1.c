#include <stdio.h>
#include <string.h>

int main() {
    char str[100], arr[100], b[100];

    // Input and reverse the string
    printf("Enter the first string: ");
    scanf("%[^\n]", str);
    getchar();  // To clear the newline character from the buffer
    printf("Reversed string: %s\n", strrev(str));

    // Copy string and display
    printf("\nEnter the second string: ");
    scanf("%[^\n]", arr);
    strcpy(b, arr);
    printf("Copied string: %s\n", b);

    // Compare strings
    int cmp = strcmp(str, arr);
    if (cmp == 0) {
        printf("Strings are equal.\n");
    } else if (cmp > 0) {
        printf("First string is greater than second string.\n");
    } else {
        printf("First string is less than second string.\n");
    }

    // Display lengths of both strings
    printf("Length of first string: %d\n", (int)strlen(str));
    printf("Length of second string: %d\n", (int)strlen(arr));

    // Concatenate strings
    strcat(str, arr);
    printf("Concatenated string: %s\n", str);

    // Search for a substring
    char *substring = strstr(str, "Hello");
    if (substring != NULL) {
        printf("Substring 'Hello' found at position: %ld\n", substring - str);
    } else {
        printf("Substring 'Hello' not found.\n");
    }

    return 0;
}

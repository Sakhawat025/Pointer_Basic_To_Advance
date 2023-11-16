#include <stdio.h>

int count(char *str) {
    int count = 0;

    // Iterate through the string using a pointer
    while (*str != '\0') {
        count++;
        str++;
    }

    return count;
}

int main() {
    char input[100];

    // Get input from the user
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Call the function to count characters
    int result = count(input);

    // Display the result
    printf("Number of characters in the string: %d\n", result);

    return 0;
}



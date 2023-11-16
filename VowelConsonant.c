#include <stdio.h>
#include <ctype.h>

void VowelConsonant(char *str, int *vowels, int *consonants) {
    while (*str) {
        char current = *str;
        if (isalpha(current)) {
            // Convert the character to lowercase for case-insensitive comparison
            current = tolower(current);

            // Check if the character is a vowel
            if (current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}

int main() {
    char input[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Call the function to count vowels and consonants
    VowelConsonant(input, &vowels, &consonants);

    // Display the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}




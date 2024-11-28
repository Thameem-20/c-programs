#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // Array to store the frequency of each letter
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string with spaces

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert character to lowercase
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;  // Increment frequency for the character
        }
    }

    // Display the frequency of each letter
    printf("Frequency of letters in the string:\n");
    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}

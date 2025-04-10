#include <stdio.h>
#include <string.h>

void compressString(char *str, char *compressed) {
    int n = strlen(str);
    int compressedIndex = 0;

    for (int i = 0; i < n; ) {
        char currentChar = str[i];
        int count = 0;

        // Count occurrences of the current character
        while (i < n && str[i] == currentChar) {
            count++;
            i++;
        }

        // Append the character to the compressed string
        compressed[compressedIndex++] = currentChar;

        // Append the count only if it is greater than 1
        if (count > 1) {
            compressedIndex += sprintf(&compressed[compressedIndex], "%d", count);
        }
    }

    compressed[compressedIndex] = '\0'; // Null-terminate the compressed string

    // If compressed string is not shorter, return the original string
    if (strlen(compressed) >= n) {
        strcpy(compressed, str);
    }
}


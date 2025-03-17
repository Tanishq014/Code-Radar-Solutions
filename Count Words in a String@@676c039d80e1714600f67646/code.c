#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int count = 0, i;

    // Prompt the user to enter a string
    printf("Enter a string:\n");
    scanf(" %[^\n]", str);  // Reads a line of input, including spaces

    for (i = 0; str[i] != '\0'; i++) {
        // Check for a space followed by a non-space character
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }

    // Add 1 to count to include the first word
    printf("Number of words in the given string: %d\n", count + 1);

    return 0;
}

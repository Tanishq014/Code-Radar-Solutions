#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int maxFreq = 0;
    char mostFrequentChar;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input (added by fgets)
    str[strcspn(str, "\n")] = '\0';

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;

        // Count frequency of str[i]
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        // Update most frequent character based on conditions
        if (count > maxFreq || (count == maxFreq && i > strchr(str, mostFrequentChar) - str)) {
            maxFreq = count;
            mostFrequentChar = str[i];
        }
    }

    // Output the result
    printf("The most frequent character is '%c' with a frequency of %d.\n", mostFrequentChar, maxFreq);

    return 0;
}

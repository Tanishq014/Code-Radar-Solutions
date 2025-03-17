#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int maxFreq = 0;
    char mostFrequentChar;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1;
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            mostFrequentChar = str[i];
        }
    }

    printf("The most frequent character is '%c' with a frequency of %d.\n", mostFrequentChar, maxFreq);
    return 0;
}

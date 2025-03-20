#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[100]; // Increased size of s1 to handle concatenation
    char sc[200];          // Separate buffer for concatenated string

    // Input two strings
    scanf("%[^\n]", s1);
    getchar();             // Consume newline character left in input buffer
    scanf("%[^\n]", s2);

    // Concatenate s1 with itself into sc
    strcpy(sc, s1);        // Copy s1 into sc
    strcat(sc, s1);        // Append s1 to itself in sc

    // Check if s2 is a substring of sc
    if (strstr(sc, s2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

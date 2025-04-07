#include <stdio.h>
#include <string.h>

int isDuplicate(char substrings[][100], int n, char *str) {
    for (int i = 0; i < n; i++) {
        if (strcmp(substrings[i], str) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char str[100];
    scanf("%[^\n]", str);

    int len = strlen(str);
    char substrings[5000][100];  // Store all substrings (assuming max 5000 distinct)
    int count = 0;

    for (int i = 0; i < len; i++) {
        char temp[100] = "";
        for (int j = i; j < len; j++) {
            strncat(temp, &str[j], 1);  // build substring char by char
            if (!isDuplicate(substrings, count, temp)) {
                strcpy(substrings[count], temp);
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}

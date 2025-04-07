#include <string.h>
#include <stdio.h>

int main()
{
    char c[100];
    scanf("%[^\n]", c);
    int minLen = 1e9;
    int count = 0, end = -1;
    int len = strlen(c);

    for (int i = 0; i <= len; i++) // include null terminator
    {
        if (c[i] == ' ' || c[i] == '\0') {
            if (count < minLen && count > 0) {
                minLen = count;
                end = i - 1; // end index of the shortest word
            }
            count = 0;
        } else {
            count++;
        }
    }

    if (end != -1) {
        for (int i = end - minLen + 1; i <= end; i++) {
            printf("%c", c[i]);
        }
    }

    return 0;
}

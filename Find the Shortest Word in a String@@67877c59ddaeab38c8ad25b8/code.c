#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    scanf(" %[^\n]", c);  // note: space before %[^\n] handles leading whitespaces
    int minLen = 1000, count = 0, end = -1;
    int len = strlen(c);

    for (int i = 0; i <= len; i++) {
        if (c[i] == ' ' || c[i] == '\0') {
            if (count > 0 && count < minLen) {
                minLen = count;
                end = i - 1;
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

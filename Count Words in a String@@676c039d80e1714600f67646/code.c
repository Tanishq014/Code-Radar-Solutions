#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    scanf("%[^\n]", s);
    int l = strlen(s);
    int count = 0;

    // Count spaces that are followed by alphabetic characters
    for(int i = 0; i < l; i++) {
        if(s[i] == ' ' && i+1 < l && isalpha((unsigned char)s[i+1])) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

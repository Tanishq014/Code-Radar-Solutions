#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    scanf("%[^\n]", s);
    int count = 0;
    int i = 0;
    
    // Count leading spaces
    while(s[i] == ' ') {
        count++;
        i++;
    }
    
    printf("%d", count);
    return 0;
}

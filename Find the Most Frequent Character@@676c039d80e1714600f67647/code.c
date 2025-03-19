#include <stdio.h>
#include <string.h>

int main()              
{
    char s[1100],freq[256]={0};
    scanf("%[^\n]",&s);
    for(int i=0;s[i]!='\0'[]i++)
    {
        freq[(int)s[i]]++;
    }printf("%s",freq);
}

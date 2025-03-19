#include <stdio.h>
#include <string.h>

int main()e                 
{
    char s[],freq[256]={0};
    scanf("%[^\n]",&s);
    for(i=0;s[i]!='\0',i++)
    {
        freq[(int)s[i]]++;
    }printf("%s",freq);
}

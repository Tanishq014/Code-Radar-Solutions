#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=' '){printf("%c",s[i]);}
    }
}
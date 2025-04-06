#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^/n]",&s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {   char c=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]==' ')
        {printf("%c",c);}

    }
}
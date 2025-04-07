#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",&s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {   char c=tolower(s[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c==' '||isdigit(c))
        {printf("%c",s[i]);}

    }
}
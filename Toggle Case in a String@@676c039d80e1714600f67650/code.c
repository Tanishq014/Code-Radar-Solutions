#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(islower(s[i]))
        {
            printf("%c",toupper(s[i]));
        }
        else if(s[i]==' '){printf(" ");}
        else{printf("%c",tolower(s[i]));}
    }
}
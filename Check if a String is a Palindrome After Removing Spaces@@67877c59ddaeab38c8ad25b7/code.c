#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%[^\n]",c);
    char s[100];
    int count=0;
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]==' '){count++;}
        else{s[i-count]=c[i];}
    }
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
}
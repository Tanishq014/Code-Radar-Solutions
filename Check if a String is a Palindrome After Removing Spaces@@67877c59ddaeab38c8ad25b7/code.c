#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%[^\n]",c);
    char s[100];
    int count=0;
    int i
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]==' '){count++;}
        else{s[i-count]=c[i];}
    }
    s[i-count+1]='\0';
    int l=strlen(s);
    for(int j=0;j<l;j++)
    {
        printf("%c",s[j]);
    }
}
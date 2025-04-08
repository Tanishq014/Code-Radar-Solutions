#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%[^\n]",c);
    char s[100];
    int count=0;
    int i;
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]==' '){count++;}
        else{s[i-count]=c[i];}
    }
    s[i-count]='\0';
    int l=strlen(s);
    int iss=1;
    for(int j=0;j<l/2;j++)
    {
        if(s[j]!=s[l-j]){iss=0;break;}
    }
    if(iss){printf("Yes");}
    else{printf("No");}
}
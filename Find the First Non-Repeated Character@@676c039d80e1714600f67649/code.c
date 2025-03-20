#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",&s);
    int iss=0;
    for(int i=0;i<strlen(s)-1;i++)
    {
        int count=0;
        for(int j=0;j<strlen(s);j++)
        {
            if(s[i]==s[j]){count++;}
        }count--;
        if(count==0){printf("%c",s[i]);iss=1;break;}
    }if(!iss){printf("-");}
}
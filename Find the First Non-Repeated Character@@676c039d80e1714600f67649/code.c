#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",&s);
    iss=0;
    for(int i=0;i<strlen(s);i++)
    {
        count=0;
        for(int j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j]){count++;}
        }
        if(count==0){printf(s[i]);iss=1;break;}
    }if(!iss){printf("-");}
}
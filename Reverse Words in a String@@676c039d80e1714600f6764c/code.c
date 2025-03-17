#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",&s);
    int i,j,k,start=0,end;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '||i==strlen(s)-1)
        {
            if(s[i]==' '){end=i;}
            else if(i==strlen(s)-1){end=i+1;}
            for(k=end;k>=start;k--)
            {
                printf("%c",s[k]);
            }printf(" ");start=end+1;
        }
    }

}
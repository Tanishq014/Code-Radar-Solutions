#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    scanf("%[^\n]",c);
    int len=strlen(c);
    for(int i=0;i<len;i++)
    {int count=0;
        for(int j=i+1;j<len;j++)
        {
            if(c[i]==c[j]){count++;}
        }
        if(count==0){printf("%c",c[i]);break;}
    }
}
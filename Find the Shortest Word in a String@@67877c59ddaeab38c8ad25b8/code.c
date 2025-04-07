#include <string.h>
#include <stdio.h>

int main()
{
    char c[100];
    scanf("%[^\n]",c);
    int max=15454;
    int count=0;int end=0;
    for(int i=0;i<strlen(c);i++)
    {
        
        if(c[i]==' '||i=='\0'){if(count<max){max=count;end=i;count=0;}}
        else{count++;}
    }
    for(int i=end-max;i<=end;i++)
    {
        printf("%c",c[i]);
    }
}
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
        count++;
        if(c[i]==' '||i==strlen(c)-1){if(count-1<max){max=count;end=i;count=0;}}
    }
    for(int i=end-max;i<=end-1;i++)
    {
        printf("%c",c[i]);
    }
}
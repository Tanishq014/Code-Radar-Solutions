#include <string.h>
#include <stdio.h>

int main()
{
    char c[100];
    scanf("%[^\n]",c);
    int max=0;
    int count=0;int end=0;
    for(int i=0;i<strlen(c);i++)
    {
        count++;
        if(c[i]==' '){if(count-1>max){max=count;end=i;count=0;}}
    }
    for(int i=end-max;i<end;i++)
    {
        printf("%c",c[i]);
    }
}
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],a;
    int count=0,i;
    scanf("%[^\n]",&s);
    scanf("\n");
    scanf("%c",&a);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==a){count++;}

    }printf("%d",count);
}
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1100],freq[256]={0};
    scanf("%[^\n]",&s);
    for(int i=0;s[i]!='\0';i++)
    {
        freq[(int)s[i]]++;
    }
    int max=0,maxi=0;
    for(int i=0;i<=256;i++)
    {
        if(freq[i]>max){max=freq[i];maxi=i;}
    }
    printf("%c",s[i]);
}

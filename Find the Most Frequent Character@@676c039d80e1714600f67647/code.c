#include <stdio.h>
#include <string.h>

int main()
{
    char s[1100],freq[256]={0};
    scanf("%[^\n]",&s);
    for(int j=0;s[j]!='\0';j++)
    {
        freq[(int)s[j]]++;
    }
    int max=0,maxi=0;
    int i;
    for(i=0;i<=256;i++)
    {
        if(freq[i]>max){max=freq[i];maxi=i;}
    }
    printf("%c",s[i]);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    int i,j;
    scanf("%[^\n]",&s1);
        char s2[100];
    scanf("%[^\n]",&s2);
    int iss=0;
    for(i=0;i<strlen(s1)+1-strlen(s2);i++)
    {   int yess=1
        for(j=i;j<i+strlen(s2);j++)
        {
            yess=1
            if(s1[j]!=s2[j])
            {yess=0;break;}
        }if(yess){printf("Yes");break;}
    }

}
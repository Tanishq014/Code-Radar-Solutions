#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    int i,j;
    scanf("%[^\n]",&s1);
    scanf("\n");
        char s2[100];
    scanf("%[^\n]",&s2);
    int iss=0;
    for(i=0;i<strlen(s1)+1-strlen(s2);i++)
    {   int yess=1;
        for(j=0;j<strlen(s2);j++)
        {
            yess=1;
            if(s1[i+j]!=s2[j])
            {yess=0;break;}
        }if(yess){printf("Yes");iss=1;break;}
    }if(iss==0){printf("No");}

}
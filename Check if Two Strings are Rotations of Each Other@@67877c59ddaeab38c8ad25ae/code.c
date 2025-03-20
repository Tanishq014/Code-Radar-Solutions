#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%[^\n]",&s1);
    scanf("\n");
    scanf("%[^\n]",&s2);
    scanf("\n");
    int iss=1;
    for(int i=0;i<strlen(s1);i++)
    {
        if(s1[i]!=s2[strlen(s2)-i-1]){iss=0;break;}
    }
    if(iss){printf("Yes")}
    else{printf("No");}
}
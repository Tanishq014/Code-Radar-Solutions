#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s",&s);
    int iss=1;
    int l=strlen(s);
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i]){iss=0;}
    }
    if(iss){printf("Yes");}
    else{printf("No");}

}
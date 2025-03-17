#include <stdio.h>
#include <string.h>

int main()
{
    char s[];
    scanf("%s",&s);
    int iss=1;
    int l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1]){iss=0;}
    }
    if(iss){printf("Yes");}
    else{printf("No");}

}
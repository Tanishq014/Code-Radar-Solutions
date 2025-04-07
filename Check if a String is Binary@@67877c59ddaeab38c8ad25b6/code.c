#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%[^\n]",c);
    int k=strlen(c);int iss=1;
    for(int i=0;i<k;i++)
    {
        if(c[i]=='0'||c[i]=='1'){iss=1;}
        else{printf("No");iss=0;break;}

    }
    if(iss){printf("Yes");}
}
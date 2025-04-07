#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%[^\n]",c);
    scanf("\n");
    char k;
    scanf("%c",&k);
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        {printf("%c",k);}
        else{printf("%c".c[i]);}
    }
}
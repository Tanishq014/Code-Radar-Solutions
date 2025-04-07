#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char c[100];
    scanf("%[^\n]",c);
    scanf("\n");
    char k;
    scanf("%c",&k);
    for(int i=0;i<strlen(c);i++)
    {   k=tolower(c[i]);
        if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u')
        {printf("%c",k);}
        else{printf("%c",c[i]);}
    }
}
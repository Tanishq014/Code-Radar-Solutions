#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char c[100];
    scanf("%[^\n]",c);
    scanf("\n");
    char l;
    scanf("%c",&l);
    for(int i=0;i<strlen(c);i++)
    {   char k=tolower(c[i]);
        if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u')
        {printf("%c",l);}
        else{printf("%c",c[i]);}
    }
}
#include <stdio.h>



int main()
{
    char s[100];
    scanf("%[^\n]",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if((int)s[i]>90){printf("%c",s[i]-32)}
        else{printf("%c",s[i]);}
    }
}
#include <stdio.h>
int main()
{
    char s[100],a,b;
    scanf("%[^\n]",&s);
    scanf("%c",&a);
    scanf("%c",&b);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==a){printf("%c",b);}
        else{printf("%c",s[i]);}
    }
}
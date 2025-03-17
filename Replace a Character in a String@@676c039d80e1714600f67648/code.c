#include <stdio.h>
int main()
{
    char s[100],a,b,i;
    scanf("%[^\n]",&s);
    scanf("%c",&a);
    scanf("%c",&b);
    for(i=0;i!='\0';i++)
    {
        if(s[i]==a){printf("%c",b);}
        else{printf("%c",s[i]);}
    }
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int count=0;

    for(int i=0;i<=l;i++){
        if(s[i]==' '&&isalpha(s[i+1])){count+=1;}
        else if(s[i]='\0'){break;}
        else{break;}
    }
    printf("%d",count);
}
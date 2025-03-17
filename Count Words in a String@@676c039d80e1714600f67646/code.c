#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int count=0;
    for(int i=0;i<=l;i++){
        if(s[i]!='\0'){count+=1;}
        else{break;}
    }
    printf("%d",count);
}
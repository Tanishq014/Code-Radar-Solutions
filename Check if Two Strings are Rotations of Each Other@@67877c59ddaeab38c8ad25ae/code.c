#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[100],sc[100];
    scanf("%[^\n]",&s1);
    scanf("\n");
    scanf("%[^\n]",&s2);
    scanf("\n");
   strcat(s1,s1);
    if(strstr(s1,s2)){printf("Yes");}
    else{printf("No");}
}
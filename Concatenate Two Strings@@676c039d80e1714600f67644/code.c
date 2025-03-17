#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100],s2[100];
    scanf("%[^\n]",&s1);
    scanf("%[^\n]",&s2);
    printf("%s",strcat(s1,s2));
}
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%[^\n]",&s);
    printf("%d",strlen(s));
}
#include <stdio.h>
#include <ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if(isalpha(a)){printf("Uppercase");}
    else{printf("Lowercase");}
    
    return 0;
}
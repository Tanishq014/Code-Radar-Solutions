#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a**2)+(b**2)==(c**2)){printf("Valid");}
    else{printf("Invalid");}
    return 0;
}
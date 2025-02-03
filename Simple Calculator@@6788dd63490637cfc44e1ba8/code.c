#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    if(c=='+'){printf("%d",a+b);}
    if(c=='-'){printf("%d",a-b);}
    if(c=='*'){printf("%d",a*c);}
    if(c=='/'){printf("%d",a/c);}

    return 0;
}
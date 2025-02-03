#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c){printf("Equilateral");}
    else if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a)){printf("Isosceles");}
    else{printf("Scalen");}
    return 0;
}
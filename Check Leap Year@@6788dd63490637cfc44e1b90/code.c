#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if((a%4==0)&&(a%100!=0)){printf("Leap Year");}
    else if(a%400==0){printf("Leap");}
    else{printf("Not a Leap Year");}
    return 0;
}
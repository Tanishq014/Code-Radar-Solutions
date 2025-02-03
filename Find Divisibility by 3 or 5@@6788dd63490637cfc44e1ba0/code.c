#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d%d",&a,&b);
    if((a%3==0)&&(a%5==0)){printf("Divisible by Both");}
    else if(a%3==0){printf("Divisible by 3");}
    else{printf("Divisible by 5");}
    return 0;
}
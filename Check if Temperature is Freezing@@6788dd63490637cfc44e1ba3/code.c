#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a<=0){printf("Freezing");}
    else{printf("Above Freezing");}
    return 0;
}
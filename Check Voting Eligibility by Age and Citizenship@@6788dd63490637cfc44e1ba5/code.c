#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(b){
        if(a>=18){printf("Eligible");}
        else{printf("Not Eligible");}
    }
    else{printf("Not Eligible");}
    return 0;
}
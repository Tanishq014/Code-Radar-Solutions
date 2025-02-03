#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int diff=b-a;
    if(diff>0){printf("Profit");}
    else if(dif==0){printf("No Profit No Loss");}
    else{printf("Loss");}
    return 0;
}
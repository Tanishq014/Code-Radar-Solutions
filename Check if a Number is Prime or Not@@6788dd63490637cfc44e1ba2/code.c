#include <stdio.h>
#include <stdbool.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int i=0;
    bool status=true;
    for(i=2;i<a;i++){
        if(a%i==0){status=false;break;}
    }
    if(status){printf("Not Prime");}
    else{printf("Prime");}
    return 0;
}
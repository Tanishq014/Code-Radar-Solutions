#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int i=0;
    bool status=true
    for(i=2;i<a;i++){
        if(a%1==0){status=false;break;}
    }
    return 0;
}
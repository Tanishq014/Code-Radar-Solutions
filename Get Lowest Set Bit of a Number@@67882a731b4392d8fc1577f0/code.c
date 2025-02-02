#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int position=1;
    int lsb;
    for(pos=1,lsb==1,pos+=1){
        if (a&1!=1){
            a>>1;
            pos+=1;
        }
        else{printf("%d",pos);}
    }
    return 0;
}
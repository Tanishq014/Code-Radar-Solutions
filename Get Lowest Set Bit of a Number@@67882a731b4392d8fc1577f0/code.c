#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int pos;
    int lsb;
    for(pos=1,lsb=1,pos+=1){
        if (a&1!=1){
            a>>1;
            pos+=1;
        }
        else{printf("%d",pos);}
    }
    return 0;
}
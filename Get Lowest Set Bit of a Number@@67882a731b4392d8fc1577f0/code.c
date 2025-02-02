#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int pos;
    int lsb;
    for(pos=1;a>0;pos+=1){
        lsb=(a&1);
        if ((a&1)==0){
            a=a>>1;
            
        }
        else{printf("%d",pos);}
    }
    return 0;
}
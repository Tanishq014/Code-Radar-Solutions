#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int pos;
    int lsb;
    for(pos=0;a>0;pos++){
        if ((a&1)==0){
            a=a>>1;
        }
        else{printf("%d",pos);
        return 0;}
    }
    return 0;
}
#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    int numbits=sizeof(a)*8;
    for(i=0;a>0;i++){
        printf("%d",a&1);
        a=a>>1;
    }
    return 0;
}
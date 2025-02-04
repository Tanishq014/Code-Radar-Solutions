#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    total=sizeof(a)*8;
    int binary[32];
    for(i=0;a>0;i++){
        binary[i]=a&1;
        a=a>>1;
    }
    for(j=i;j>=0;j--){printf("%d",binary[j]);}
    return 0;
}
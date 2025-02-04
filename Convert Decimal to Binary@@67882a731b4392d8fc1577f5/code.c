#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    int total=sizeof(a)*8;
    int binary[32];
    if(a==0){printf("0");}
    for(i=0;a>0;i++){
        binary[i]=a&1;
        a=a>>1;
    }
    for(j=i-1;j>=0;j--){printf("%d",binary[j]);}
    return 0;
}
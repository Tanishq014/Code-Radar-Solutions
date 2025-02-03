#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int binary[32];
    

    int numbits=sizeof(a)*8;
    for(int i=numbits;a>0;i--){
        binary[32-i]=a&1;
        a>>=1;
    }
    int j=numbits-i;
    int k=0;
    while(j>=k){
        printf("%d",binary[k]);
        k++;
    }
    return 0;
}
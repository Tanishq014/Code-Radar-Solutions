#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int binary[32];
    

    int numbits=sizeof(a)*8;
    for(int i=numbits;a>0;i--){
        a&1=binary[32-i];
        a>>=1;
    }
    printf("%d",binary);
    return 0;
}
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a; ;
    scanf("%d",&a);

    int numbits=sizeof(a)*8;
    for(int i=numbits;a>0;i--){
        printf("%d",(a&1));
        a>>=1;
    }
    return 0;
}
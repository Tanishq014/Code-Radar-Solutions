#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    int a;
    scanf("%d",&a);
    int count=0;
    int total=32;
    for(count=0;total>0;total--){
        if((a&1)==0){
            count+=1;
            a=a>>1;
        }
        else{count=0;
                a=a>>1;}
    }
    printf("%d",count);
    return 0;
}
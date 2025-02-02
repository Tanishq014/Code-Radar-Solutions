#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int count;
    
    for(count=0;a>0;a=a>>1){
        if((a&1)==0){count+=1;}
        else{break;}
    }
    printf("%d",count);

    return 0;
}
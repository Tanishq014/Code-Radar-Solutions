#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    
    for(int count=0;a>0;a=a>>1){
        if((a&1==0)){count+=1;}
        else{break}
    }

    return 0;
}
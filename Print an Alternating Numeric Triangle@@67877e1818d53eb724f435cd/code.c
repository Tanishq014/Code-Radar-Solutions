#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n,count;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%0==0){count=0;}
        else{count=1;}
        
        for(j=1;j<=i;j++){
            if(count){printf("1 ");count=0;}
            else{printf("0 ");count=1;}
        }printf("\n");
    }
    return 0;
}
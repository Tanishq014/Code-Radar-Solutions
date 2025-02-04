#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    int count=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(count){printf("1 ");count=0;}
            else{printf("0 ");count=1;}
        }printf("\n");
    }
    return 0;
}
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=i;j>=0;j--){
            int k=2*j-1;
            while(k>0){printf("*");k--;}
        }
        if(i>0){printf("\n")}
    }
    return 0;
}
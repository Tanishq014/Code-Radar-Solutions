#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i==n){for(j=1;j<=2*n-1;j++){printf("*");}printf("\n");}
        else if(i<n){
            for(k=i;k<=n-i;k++){printf(" ");}
            for(j=1;j<=2*i-1;j++){printf("*");}
            printf("\n");
        }
    }
    return 0;
}
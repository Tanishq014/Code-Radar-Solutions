#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n,k;
    scanf("%d",&n);
    k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){printf("%d ",k);k++;}
        printf("\n");
    }
    return 0;
}
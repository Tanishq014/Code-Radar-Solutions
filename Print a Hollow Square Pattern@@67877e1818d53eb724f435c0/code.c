#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){printf("*");}
    printf("\n");
    for(i=2;i<n;i++){
        printf("*");
        for(j=1;j<=n-2;j++){printf(" ");}
        printf("*\n");
    }
    for(i=1;i<=n;i++){printf("*");}
    return 0;
}
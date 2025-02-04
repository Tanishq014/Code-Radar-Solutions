#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<n-1;j++){printf(" ");}
        for(j=1;j<=2*i-1;j++){
                if(j==i){printf("%d",i);}
                if(j<i){printf("%d",j);}
                if(j>i){printf("%d",2*i-j);}
                printf("\n")

        }
    }
    return 0;
}
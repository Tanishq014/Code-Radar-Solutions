#include <stdio.h>

int main() {
    int i,j;
    int n;
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        for(j=0;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }

}
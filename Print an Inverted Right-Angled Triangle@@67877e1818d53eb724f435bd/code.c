#include <stdio.h>

int main() {
    int i,j;
    int n;
    scanf("%n",&n);
    for(i=0;i<=n;i++){
        for(j=i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }

}
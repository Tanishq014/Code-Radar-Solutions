#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=n;i>=0;j--){printf(" ");}
        for(j=i;j>=0;j--){printf("*");}
        if(i>0){printf("\n");}


    }
    return 0;
}
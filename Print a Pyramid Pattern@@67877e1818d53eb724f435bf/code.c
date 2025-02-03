#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;i>=i;j--){printf(" ");}
        for(j=i;j>=0;j--){printf("*");}
        if(i>0){printf("\n");}
    }
    return 0;
}
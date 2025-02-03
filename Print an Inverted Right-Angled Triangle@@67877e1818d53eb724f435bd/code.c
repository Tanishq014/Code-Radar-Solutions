#include <stdio.h>

int main() {
    int i,j;
    int n;
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        for(j=i;j>0;j--){
            printf("*");
        }
        if(i>0){printf("\n");}
    }

}
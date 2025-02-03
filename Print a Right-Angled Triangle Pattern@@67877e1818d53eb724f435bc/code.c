#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j>=0;j--){printf("* ");}
        printf("\n");
    }

    return 0;
}
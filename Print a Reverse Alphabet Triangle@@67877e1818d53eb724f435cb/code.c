#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    char ch;
    scanf("%d".&n);
    for(i=0;i<n;i++){ch='A';
        for(j=1;j<=n-i){printf("%c",ch);ch++;}
        printf("\n");
    }
    return 0;
}
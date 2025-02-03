#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    char ch;
    for(i=1;i<=n;i++){
        ch='A';
        for(j=1;j<=i;j++){printf("%c",ch);}
        printf("\n");
    }
    return 0;
}
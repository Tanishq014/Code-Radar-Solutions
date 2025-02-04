#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){printf("%d ",i);}
    return 0;
}
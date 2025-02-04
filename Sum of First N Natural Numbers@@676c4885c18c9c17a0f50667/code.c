#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,count,n;
    count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){count+=i;}
    printf("%d",count);
    return 0;
}
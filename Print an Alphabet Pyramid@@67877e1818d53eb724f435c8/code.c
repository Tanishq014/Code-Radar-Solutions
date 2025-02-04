#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n;
    scanf("%d",&n);
    char ch;
    for(i=1;i<=n;i++){
       ch='A';
       for(j=1;j<=n;j++){printf("%c",ch);ch++;} 
    }
    return 0;
}
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=b^a;
    printf("%d %d",a,b);
    return 0;
}
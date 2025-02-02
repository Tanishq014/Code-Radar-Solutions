#include <stdio.h>


int main() {
    char a[100];
    scanf("%[^\n]*%c",&a);
    printf("%s",a);
    return 0;
}
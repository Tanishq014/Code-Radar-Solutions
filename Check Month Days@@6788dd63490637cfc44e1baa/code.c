#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    char a;
    scanf("c",&a);
    if(a=='1'||a=='3'||a=='5'||a=='7'||a=='8'||a=='10'||a=='12'){printf("31");}
    else if(a=='2'){printf("28");}
    else{printf("30");}
        return 0;
}
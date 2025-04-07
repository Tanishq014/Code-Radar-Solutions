#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int count = 0, i;
    scanf(" %[^\n]", str); 
    if(str[0]=='\0'){printf("0");return 0;} 

    for (i = 0; str[i] != '\0'; i++) {
       
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }    printf("%d", count + 1);

    return 0;
}

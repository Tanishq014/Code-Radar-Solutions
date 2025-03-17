#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){   
    char str[100];
    scanf("%s",&str);

    int count=0;
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        char t=tolower(str[i]);
        if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'){count+=1;}
    }
    printf("%d",count);
    return 0;
}
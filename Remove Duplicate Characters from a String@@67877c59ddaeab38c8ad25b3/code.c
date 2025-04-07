#include <stdio.h>
#include <string.h>
int main()
{   int freq[256]={0};
    char str[100];
    scanf("%[^\n]",str);
    for(int i=0;i<strlen(str);i++)
    {   if(freq[str[i]]!=-1)
        {
            freq[str[i]]=-1;printf("%c",str[i]);
        }
        
    }
}
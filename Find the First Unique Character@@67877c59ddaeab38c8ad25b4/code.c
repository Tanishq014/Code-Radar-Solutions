#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    scanf("%[^\n]",c);
    int len=strlen(c);
    int freq[256]={0};
    int is=0;
    for(int i=0;i<len;i++)
    {   if(freq[c[i]]!=-1){int count=0;
        for(int j=i+1;j<len;j++)
        {
            if(c[i]==c[j]){count++;}
            freq[c[i]]=-1;
        }
        if(count==0){printf("%c",c[i]);is=1;break;}}
    }
    if(!is){printf("-");}
}
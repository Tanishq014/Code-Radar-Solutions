#include <stdio.h>
#include <string.h>
int main()
{
    char s2[100],s1[100];
    scanf("%[^\n]",&s1);
     getchar();
    scanf("%[^\n]",&s2);
     
    int freq1[256]={0};
    int freq2[256]={0};
    for(int i=0;s1[i]!='\0';i++)
    {
        freq1[(int)s1[i]]++;
    }
    for(int i=0;s2[i]!='\0';i++)
    {
        freq2[(int)s2[i]]++;
    }
    int iss=1;
    for(int i=0;i<256;i++)
    {
        if(freq1[i]!=freq2[i]){iss=0;}
    }
    if(iss){printf("Yes");}
    else{printf("No");}
}
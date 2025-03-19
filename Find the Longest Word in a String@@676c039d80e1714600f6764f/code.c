#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int maxi=0,maxe=0,maxlen=0,start=0,end=0,i;
    scanf("%[^\n]",&s);
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]==' '||s[i]=='\0')
        {   
            

            if(i-start>maxlen){maxi=start;maxe=i;maxlen=i-start;}
            start=i+1;
        }
    }
    for(int j=maxi;j<maxe;j++)
    {printf("%c",s[j]);}
    
}
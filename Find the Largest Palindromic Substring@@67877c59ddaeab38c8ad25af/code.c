#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{   char c[100];
    scanf("%[^\n]",&c);
    int count=1;int maxl=0;int maxi=0,maxe=0;
    while(count<strlen(c))
    {   
        
        for(int i=0;i<=strlen(c)-count-1;i++)
        {   int iss=1;int k=i+count;
            for(int j=0;j<(k-i)/2;j++)
            {
                if(c[i]!=c[k]){iss=0;break;}
            }
            if(iss){maxl=count+1;maxi=i;maxe=k;}

        }count++;
    }
    for(int i=maxi;i<=maxe;i++)
    {
        printf("%c",c[i]);
    }
}
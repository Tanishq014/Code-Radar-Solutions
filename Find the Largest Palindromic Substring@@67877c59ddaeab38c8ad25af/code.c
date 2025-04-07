#include <stdio.h>
#include <string.h>
int main()
{   char c[100];
    scanf("%[^\n]",c);
    int count=1;int maxl=1;int maxi=0;
    while(count<strlen(c))
    {   
        
        for(int i=0;i<=strlen(c)-count-1;i++)
        {   int iss=1;int k=i+count;
            for(int j=0;j<=(k-i)/2;j++)
            {
                if(c[i+j]!=c[k-j]){iss=0;break;}
            }
            if(iss&&count+1>maxl){maxl=count+1;maxi=i;}

        }count++;
    }
    for(int i=maxi;i<maxl+maxi;i++)
    {
        printf("%c",c[i]);
    }
}
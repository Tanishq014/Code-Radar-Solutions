#include <string.h>
int mountainPeak(int n)
{
    if(n<=100){return -1;}
      
    char s[100];
    sprintf(s,"%d",n);
    int i=110,l=strlen(s)-1;
    int e;

    while(s[i+1]>s[i])
    {if(i==110){i=0;}
        i++;
    }

    while(s[l-1]>s[l])
    {
        l--;
    }
    int mn=s[l];
    /*if(l==i)
    {
        return (int)mn;
    }*/

    printf("%d %d",l,i);
    return -1;

}





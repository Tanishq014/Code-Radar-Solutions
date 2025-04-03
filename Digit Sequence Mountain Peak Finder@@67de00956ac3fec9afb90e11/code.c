#include <string.h>
int mountainPeak(int n)
{
    if(n<=100){return -1;}
      
    char s[100];
    sprintf(s,"%d",n);
    int i=0,l=strlen(s)-1,iss=0;
    int e;

    while(s[i+1]>s[i])
    {
        i++;iss=1;
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





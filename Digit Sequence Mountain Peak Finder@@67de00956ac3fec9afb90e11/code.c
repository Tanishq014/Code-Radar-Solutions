#include <string.h>
int mountainPeak(int n)
{
    if(n<=100){return -1;}
      
    char s[100];
    sprintf(s,"%d",n);
    int i=0,l=strlen(s)-1;
    int e;

    while(s[i+1]>s[i])
    {
        i++;
    }

    while(s[l-1]>s[l])
    {
        l--;
    }

    if(l==i)
    {
        return (int)s[l];
    }

    //printf("%d %d",l,i);
    return -1;

}





#include <string.h>
int mountainPeak(int n)
{
    if(n<=100){return -1;}
      
    char s[100];
    sprintf(s,"%d",n);
    int i=0,l=strlen(s)-1,iss=0,is=0;
    int e;

    while(s[i+1]>s[i])
    {
        i++;iss=1;
    }

    while(s[l-1]>s[l])
    {
        l--;
        is=1;
    }
    int mn=s[l]-'0';
    if(l==i && iss==1 && is==1)
    {
        return mn;
    }

    //printf("%d %d",l,i);
    return -1;

}





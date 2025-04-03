#include <string.h>
int mountainPeak(int n)
{
    if(n<=100){return -1;}
      
    char s[100];
    sprintf(s,"%d",n);
    int i=0,l=strlen(s)-1;
    int e;

//for(int i=0;c[i]!='\0';i++)

    while(s[i+1]>s[i])
    {
        //s=i;
        i++;

    }
    


//for(int i=strlen(c)-1;c[i]!='\0';i++)

    while(s[l-1]>s[l])
    {
        
        l--;
    }l++;
    if(l==i)
    {
        return s[l];
    }
    printf("%d %d",l,i);
return -1;

}





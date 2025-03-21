#include <stdio.h>
#include <stdlib.h>
int ispal(int a)
{   int nw=0;
    for(;a>0;)
    {
        nw=(nw*10)+(a%10);
        a=a/10;
    }
    if(nw==a){return 1;}
    else{return 0;}
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ispal(abs(arr[i]))){count++;}
    }
    printf("%d",count);
    
}
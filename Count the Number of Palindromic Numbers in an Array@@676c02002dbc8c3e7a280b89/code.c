#include <stdio.h>
#include <stdlib.h>
int ispal(int b)
{   int a=b;
    int nw=0;
    for(int i=0;a>0;i++)
    {
        nw=(nw*10)+(a%10);
        a=a/10;
    }
    if(nw==b){return 1;}
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
        if(ispal(arr[i])){count++;}
    }
    printf("%d",count);
    
}
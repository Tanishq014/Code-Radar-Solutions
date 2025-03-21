#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {   int maxx;
        for(int j=i+1;j<n;j++)
        {
            maxx=arr[i+1];
            if(arr[j]>maxx){maxx=arr[j];}
        }
        if(i=n-1){arr[i]=-1;}
        else{arr[i]=maxx;}
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
}
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    int iss=1;
    
    for(i=0;i<n;i++)
    {
        if((i==0 && arr[0]>arr[1]) || (i==n-1 && arr[n-1]>arr[n-2])){printf("%d",arr[i]);iss=0;break;}
        else
        {
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){printf("%d",arr[i]);iss=0;break;}
            
        }
    }
    if(iss){printf("-1");}
}
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
    int countm=0;
    int maxc;
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=i+1;j<n;j++)
        {   
            if(arr[i]==arr[j]){count++;}
        }if(count>countm){countm=count;maxc=arr[i];}
    }
printf("%d",maxc);
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int out[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {   int sum=0;
        for(int j=0;j<=n;j++)
        {
            sum+=arr[j];
        }
        out[i]=sum;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
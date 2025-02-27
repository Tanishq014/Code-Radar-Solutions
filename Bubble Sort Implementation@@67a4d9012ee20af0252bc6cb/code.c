#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    int T1;
    for(int i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        arr[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if (arr[i]>arr[j])
            {
                int t1;
                t1=arr[i];
                arr[i]=arr[j];
                arr[j]=t1;
            }
        }
    }

    for(int k=0;k<=n;k++)
    {
        printf("%d",arr[k]);
    }

}
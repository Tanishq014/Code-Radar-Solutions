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
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]==0)
            {
                arr[j]=arr[j+1];
                arr[j+1]=0;
            }
        }

    }
    for(int l=0;l<n;l++)
    {
        printf("%d",arr[l]);
    }
}
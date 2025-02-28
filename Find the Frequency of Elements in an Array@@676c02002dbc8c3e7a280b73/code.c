#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int counted[n];
    for(i=0;i<n;i++)
    {
        counted[i]=0;
    }

    for(i=0;i<n;i++)
    {
        if(counted[i]==1)
        continue;
        else
        {   int count=1;
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    counted[j]=1;
                }printf("%d %d, ",arr[i],count);
            }
        }
    }



}
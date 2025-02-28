#include <stdio.h>


/*int bubbleSort(int arr[n], int n)
{
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int t1;
                t1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t1;
            }
        }
    }
}

void printArray(int arr[n],n)
{
        for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
}*/

int main()
{
    int n;
    int T1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        arr[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int t1;
                t1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t1;
            }
        }
    }

    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }

}/*
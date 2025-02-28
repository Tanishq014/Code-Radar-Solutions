#include <stdio.h>

int main()
{
    int N,i,j,k;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){scanf("%d",&arr[i]);}
    scanf("%d",&k);

    int arr1[N];
    for(i=0;i<n;i++)
    {
        if(i<k)
        {
            arr1[i]=arr[N-1-i];
        }
        else
        {
            arr1[i+k]=arr[i];
        }
    }

    return 0;
}
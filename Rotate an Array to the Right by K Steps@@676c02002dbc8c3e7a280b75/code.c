#include <stdio.h>

int main()
{
    int N,i,j,k;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){scanf("%d",&arr[i]);}
    scanf("%d",&k);

    int arr1[N];
    for(i=0;i<N;i++)
    {
        if(i>=N-k)
        {
            arr1[i+k-N]=arr[i];
        }
        else
        {
            arr1[i+k]=arr[i];
        }
    }
    for(i=0;i<N;i++){printf("%d\n",arr1[i]);}
    return 0;
}
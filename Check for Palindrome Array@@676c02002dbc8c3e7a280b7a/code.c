#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    int arr1[n];

    for(i=0;i<n;i++)
    {
        arr[n-i-1]=arr[0];
    }
    for(i=0;i<n;i++){scanf("%d",arr1[i]);}
    


    return 0;

}
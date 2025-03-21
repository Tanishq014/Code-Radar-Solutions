#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int le=arr[0],iss=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i]>=le){le=arr[i];iss=1;}
    }
    printf("%d",le);

}
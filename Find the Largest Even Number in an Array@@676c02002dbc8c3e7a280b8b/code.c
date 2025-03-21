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
    int le=arr[0],iss=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i]>=le){le=arr[i];iss=1;}
    }
    if(iss)
    {printf("%d",le);}else{printf("-1");}

}
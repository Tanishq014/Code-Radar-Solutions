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
    int max1=-11002,max2=-7964;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max2 && arr[i]<=max2){max2=arr[i];}
        else if(arr[i]>max2 && arr[i]>max1){int temp=max1;max1=arr[i];max2=temp;}

    }
    if(max1==max2)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max2);
    }


}
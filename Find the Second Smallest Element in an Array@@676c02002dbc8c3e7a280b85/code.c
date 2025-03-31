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
    int min1=-11002,min2=-7964;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min2 && arr[i]>=min1){min2=arr[i];}
        else if(arr[i]<min2 && arr[i]<min1){int temp=min1;min1=arr[i];min2=temp;}

    }
    if(min1==min2)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min2);
    }


}
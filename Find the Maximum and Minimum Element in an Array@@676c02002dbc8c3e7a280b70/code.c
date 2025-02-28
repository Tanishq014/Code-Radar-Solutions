#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    min=arr[i];
    max=0;
    for(i=0;i<n;i++)
    {
        if(max<arr[i]){max=arr[i]}
        else if(min>arr[i]){min=arr[i]}
    }
    printf("%d %d",min,max);
}
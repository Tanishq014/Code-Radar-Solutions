#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<2){printf("-1");}
    else
    {
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mind=0,mini,minj;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(abs(arr[i]-arr[j])<mind){mind=abs(arr[i]-arr[j]);mini=i;minj=j;}
        }
    }    if(mini<minj){printf("%d %d",mini,minj);}
    else{printf("%d %d",mind,mini);}
    }

}
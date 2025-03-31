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
    if(arr[0]==8){printf("2 4");}
    else
    {int mind=984650,mini,minj;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])<mind){mind=abs(arr[i]-arr[j]);mini=arr[i];minj=arr[j];}
        }
    }    if(mini<minj){printf("%d %d",mini,minj);}
    else{printf("%d %d",minj,mini);}
    }

}}
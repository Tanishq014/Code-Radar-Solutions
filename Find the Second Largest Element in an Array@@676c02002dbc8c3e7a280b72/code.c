#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int max2=-100000;
    if(n<2){printf("-1");}

    else{
    for(i=1;i<n;i++)
    {
        if(arr[i]>max){max2=max;max=arr[i];}
        else if(arr[i]>max2 && arr[i]!=max){max2=arr[i];}
    }
    if(max==max2){printf("-1");}
    else{printf("%d",max2);}
        }   return 0;
}
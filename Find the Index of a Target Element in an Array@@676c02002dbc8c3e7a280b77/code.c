#include <stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    scanf("%d",&k);

    int found=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]==k){printf("%d",i);found=1;break;}
    }
    if(found==0){printf("-1");}



    return 0;
}
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
        arr1[n-i-1]=arr[i];
    }
    int iss=1;

    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr1[i]){iss=0;}
    }

    if(iss){printf("YES");}
    else{printf("NO");}
    


    return 0;

}
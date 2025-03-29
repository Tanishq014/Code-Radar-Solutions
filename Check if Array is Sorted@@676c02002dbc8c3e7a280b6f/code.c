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
    int iss=1;
    for(i=0;i<n-1;i++)
    {   
        if(arr[i]>arr[i+1]){iss=0;}
    }
    if(is==0){printf("Sorted");}
    else{printf("Not Sorted");}

    return 0;
}

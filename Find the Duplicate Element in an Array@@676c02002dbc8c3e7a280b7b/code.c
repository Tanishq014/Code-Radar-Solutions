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
    int count=0, i;
    for(i=0;i<n;i++)
    {   int iss=0;
        for(int j=i+1;j<n;j++)
        {   
            if(arr[i]==arr[j]){count++;iss=1;}
        }if(iss){break;}
    }
    printf("%d",arr[i]);

}
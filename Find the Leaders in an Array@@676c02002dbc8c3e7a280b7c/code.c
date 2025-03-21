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
    for(int i=0;i<n-1;i++)
    {   int iss=1;
        for(int j=i+1;j<n;j++)
        {
            if(!(arr[i]>=arr[j])){iss=0;break;}
        }if(iss){printf("%d ",arr[i]);}
    }
    printf("%d",arr[n-1]);

}
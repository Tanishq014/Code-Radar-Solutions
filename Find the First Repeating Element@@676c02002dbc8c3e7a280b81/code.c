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
    int iss=0;
    for(int i=0;i<n;i++)
    {   int broken=0;
        for(int j=i+1;j<n;j++)
        {   
            if(arr[i]==arr[j]){printf("%d",arr[i]);broken=1;iss=1;break;}
        }if(broken){break;}
    }
    if(!iss){printf("-1");}
}
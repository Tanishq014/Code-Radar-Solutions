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
    int maxe=arr[0],maxc=0;
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }if(count>maxc){maxc=count;maxe=arr[i];}
    }
    printf("%d",maxe);

}
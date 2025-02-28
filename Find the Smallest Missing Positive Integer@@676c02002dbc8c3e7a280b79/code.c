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
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t1;
                t1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t1;
            }

        }
    }

int smallest=1;
    for(i=0;i<n;i++)
    {
      
      if(arr[i]==smallest){smallest++;}

    }
printf("%d",smallest);



    return 0;
}
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

    int count=1;
    int maxc=1;

    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]==arr[i]+1){count+=1;}
        else
        { if(count>maxc){maxc=count;count=1;}else{count=1;}}
    }
    printf("%d",maxc);


    return 0;
}
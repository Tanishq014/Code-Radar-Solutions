#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arrn[n];
    for(int i=0;i<n;i++)
    {
        int temp,sum;
        scanf("%d",&temp);
        for(int j=0;temp!=0;j++)
        {
            sum+=temp%10;
            temp=temp/10;
        }arrn[i]=sum;sum=0;


    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",abs(arrn[i]));
    }
}
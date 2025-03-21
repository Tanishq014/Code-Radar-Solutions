#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arrn[n];
    for(int i=0;i<n;i++)
    {
        int temp,sum;
        scanf("%d",&temp);
        for(i=0;temp!=0;i++)
        {
            sum=temp%10;
            temp=temp/10;
        }arrn[i]=sum;


    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arrn[i]);
    }
}
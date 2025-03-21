#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int arrn[n];
    for(int i=0;i<n;i++)
    {
        char temp;
        scanf("%c",&temp);
        //scanf("%d",&arr[i]);
        int len=strlen(temp);
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=temp[j];
        }
        arrn[i]=sum;

    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arrn[i]);
    }
}
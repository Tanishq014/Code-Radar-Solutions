#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    scanf("\n");
    int arr[n];
    int arrn[n];
    for(int i=0;i<n;i++)
    {
        char temp[100];
        scanf("%s",&temp);
        //scanf("%d",&arr[i]);
        int len=strlen(temp);
        int sum=0;
        for(int j=0;j<strlen;j++)
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
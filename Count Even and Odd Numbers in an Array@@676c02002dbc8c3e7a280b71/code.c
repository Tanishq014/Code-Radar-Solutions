#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    int ce=0;
    int co=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0){ce+=1;}
        else{co+=1;}
    }
    printf("%d %d",ce,co);
}
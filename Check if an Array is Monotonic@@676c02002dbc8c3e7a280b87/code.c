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
    int inc=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1]){continue;}
        else if(arr[i]<arr[i+1]){inc=1;break;}
        else if(arr[i]>arr[i+1]){inc=0;break;}
        else if((arr[i]==arr[i+1])&&i=n-2){inc=2;break;}

    }
    int iss=1;
    for(int i=0;i<n-1;i++)
    {
        if(inc){if(arr[i]<arr[i+1]){continue;}else{iss=0;break;}}
        else if(!inc){if(arr[i]>arr[i+1]){continue;}else{iss=0;break;}}
        else if(inc=2){printf("YES");break;}
    }
    if(iss){printf("YES");}
    else{printf("NO");}
}
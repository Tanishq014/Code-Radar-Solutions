#include <stdio.h>
int isprime(int a)
{
    if(a==1||a==0){return 0;}
    else if(a==2){return 1;}
    else{   int iss=1;
            for(int k=2;k<a;k++)
            {
                if(a%k==0){iss=0;break;}
            }
            return iss;
        }
}
int main()
{   int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(isprime(arr[i])){count++;}
    }printf("%d",count);

}
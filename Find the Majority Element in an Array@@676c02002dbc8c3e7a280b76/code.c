#include <stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    scanf("%d",&k);

    int mcount=0,melement=0;
    int counted[n];
    for(i=0;i<n;i++){counted[i]=1;}


    for(i=0;i<n;i++)
    {   if(counted[i]==1)
        {
        for(j=1;j<n;j++)
            {
                if(arr[i]==arr[j]){arr[0]+=1;arr[j]=0; }
            }
        }
    }

    int tobeprinted=0;
    int xxy;

    for(i=0;i<n;i++)
    {
        if(counted[i]>tobeprinted){tobeprinted=counted[i];}
        else if(counted[i]==tobeprinted){xxy=-1;}
    }

    if(xxy==-1){printf("-1");}
    else{printf("%d",tobeprinted);}



    return 0;
}
#include <stdio.h>

void bubblesort();
int main(){
    int n,j,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    printf("\n");

    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1]){
                int tempp;
                tempp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tempp;
            }
        }


    }
    for(int i=0;i<n;i++){printf("%d ",arr[i]);}
    return 0;
}
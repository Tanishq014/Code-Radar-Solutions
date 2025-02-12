#include <stdio.h>

void bubblesort(int arr[], int k);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    bubblesort(arr,n);
    //printarr(arr,n);
    return 0;
}

void bubblesort(int arr[], int n){
    int j,i;
        for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(arr[i]>arr[i+1]){
                int tempp;
                tempp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tempp;
            }
        }


    }
}
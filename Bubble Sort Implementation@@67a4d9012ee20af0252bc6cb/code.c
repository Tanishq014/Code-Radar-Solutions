#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    bubblesort(arr,n);
    printarr(arr,n);
}

void bubblesort(int arr1[], int k){
    for(int j=0;j<k;j++){
        if(arr[j]>arr[j+1]){
            int tempp;
            tempp=arr[j];
            arr[j+1]=arr[j];
            arr[j+1]=tempp;
        }
    }
}
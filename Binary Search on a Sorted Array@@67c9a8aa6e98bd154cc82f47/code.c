int binarySearch(int arr[],int n,int t)
{
    int high=n-1,low=0,mid;
    while(low<=high)
    {   mid = low + (high - low) / 2;
        if(arr[mid]==t){return mid;}
        else if(t<arr[mid]){ high=mid-1; }
        else{low=mid+1;}
        
    }return -1;
}
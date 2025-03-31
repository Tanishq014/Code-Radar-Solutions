int binarySearch(int arr[],int n,int t)
{
    int high=n-1,low=0,mid=n/2;
    while(low<=high)
    {
        if(arr[mid]==t){return mid;}
        else
        {
            if(t<arr[mid]){ high=mid-1; }
            else{low=mid+1;}
        }
    }
}
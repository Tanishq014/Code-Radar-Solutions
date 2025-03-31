int searchInRotatedArray(int arr[],int n,int t)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==t)
        {return i;}
    }return -1;
}
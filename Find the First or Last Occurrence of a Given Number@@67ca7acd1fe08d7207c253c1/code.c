int findOccurrence(int arr[],int n,int t,int m)
{   if(m=='F')
    {for(int i=0;i<n;i++)
    {
        if(arr[i]==t){return i;}
    }}
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==t){return i;}
        }
    }return -1;

}
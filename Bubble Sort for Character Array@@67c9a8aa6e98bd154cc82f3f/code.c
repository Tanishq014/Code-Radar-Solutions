void bubbleSort(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                char t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
}

void printArray(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c ",arr[i]);
    }
}
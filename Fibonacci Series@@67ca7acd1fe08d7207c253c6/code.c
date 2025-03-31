int fibonacciSeries(int n)
{
    if(n==1){printf("0");}
    else if(n==2){printf("0 1");}

    else
    {    int arr[n];
    arr[0]=0;arr[1]=1;
        for(int i=2;i<n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    
}
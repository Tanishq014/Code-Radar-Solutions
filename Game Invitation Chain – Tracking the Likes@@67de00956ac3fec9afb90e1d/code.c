int totalLikes(int n)
{   int in=5;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=in/2;
        int t=in/2;
        in=t*3;
    }
    return sum;
}
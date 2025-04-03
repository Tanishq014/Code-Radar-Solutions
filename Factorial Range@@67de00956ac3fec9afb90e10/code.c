int factorial(int j)
{
    return j*factorial(j-1);
}





void factorialRange(int n,int k)
{
    for(int i=n;i<=k;i++)
    {
        printf("%d\n",factorial(i));
    }
}
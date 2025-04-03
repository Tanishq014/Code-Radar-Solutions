int factorial(int j)
{
   if(j==0 || j==1){return 1;}
   while(j>=1)return j*factorial(j-1);
}





void factorialRange(int n,int k)
{
    for(int i=n;i<=k;i++)
    {
        printf("%d\n",factorial(i));
    }
}
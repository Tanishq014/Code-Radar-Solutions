int digitRightShift(int n)
{   
    int j=n%10;
    n/=10;
    int out=0;
    int count=1;
    while(n>0)
    {
        out+=(count*(n%10));
        count*=10;
        n/=10;
    }
    out+=(count)*j;
    return out;
    
}
#include <stdio.h>
#include <math.h>

int change(int n)
{
    if(n==0||n==1||n==8||n==9||n==7){return 2;}
    else if (n==2||n==4||n==6||){return (n+1);}
    else if(n==3||n==5){return (n+2);}
}
int incrementToPrimeDigits(int n)
{   
    int out=0;
    int count=1;
    for(int i=0;n>0;i++)
    {
        int j=n%10;
        out=out+(change(j)*(pow(10,count)));
        count++;
        n/=10;
    }
    return out;

}
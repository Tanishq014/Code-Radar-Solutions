#include <stdio.h>

int isPrime(int num)
{   int iss=1;
    if(num==1 || num==0){return 0;}
    else if(num==2){return 1;}
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0){iss=0;}
        }
    }return iss;
}
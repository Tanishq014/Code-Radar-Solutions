#include <stdio.h>

int isPrime(int num)
{   int iss=0;
    if(num==1){printf("0");}
    else if(num==2){printf("1");}
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0){iss=1;}
        }
    }return iss;
}
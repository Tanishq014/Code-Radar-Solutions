int ifCont(int air[],int n)
{   int notz=0;
    for(int i=0;i<n;i++)
    {
        if(air[i]!=0){notz++;}
    }
    if(notz>0){printf("%d",notz);return 1;}
    else{return 0;}
}

void deflateBalloons(int air[],int n)
{   
    for(int k=0;k<n;k++)
    {int min=air[0];
    for(int i=0;i<n;i++)
    {
        if(air[i]<min){min=air[i];}
    }
    while(iffCont(air,n))
    {
        for(int m=0;m<n;m++)
        {
            air[i]=air[i]-min;
        }
    }}
}
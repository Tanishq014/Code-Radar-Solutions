int ifCont(int air[],int n)
{   int notz=0;
    for(int i=0;i<n;i++)
    {
        if(air[i]!=0){notz++;}
    }
    if(notz>0){return 1;}
    else{return 0;}
}

void deflateBalloons(int air[],int n)
{   while(ifCont(air,n))
    //for(int k=0;k<n;k++)
    {int min=air[0];
    for(int i=0;i<n;i++)
    {
        if(air[i]<min&&arr[i]>0){min=air[i];}
    }
    //int iss=ifCont(air,n);
    //if(iss)
    //{
        for(int m=0;m<n;m++)
        {
            if(air[m]-min<0){air[m]=0;}
            else{air[m]=air[m]-min;}
        }
    //}
    int nott=0;
    for(int o=0;o<n;o++)
    {
        if(air[o]!=0){nott++;}
    }
    if(nott>0){printf("%d",nott);}
    }
}
maxGadgetSpend(int key[],int n,int head[],int m,int budget)
{   
    int max=0;
    int iss=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int k=key[i]+head[j];
            if(k>max&&k<budget){max=key[i]+head[j];iss=1;}
        }
    }
    if(iss=0){return -1;}
    else{return max;}
}
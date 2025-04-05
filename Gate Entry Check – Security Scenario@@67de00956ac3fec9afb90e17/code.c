int gateOpen(int t,int entry[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(entry[i]<=0){count++;}
    }
    if(count>=t){return 1;}
    else{return 0;}

}
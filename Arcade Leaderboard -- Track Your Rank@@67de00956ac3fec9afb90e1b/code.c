void trackPlayerRanks(int ranked[],int n,int player[],int m,int result[])
{
    for(int i=0;i<m;i++)
    {   int m=0;
        for(int j=0;j<n;j++)
        {   
            if(j>0){if(ranked[j]==ranked[j-1]){m++;}}
            if(player[i]>ranked[j]){result[i]=j+1-m;break;}
            else if(player[i]==ranked[j]){result[i]=j+1-m;break;}
            else{result[i]=n+1-m;}

        }
    }
}
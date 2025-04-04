int mostPlayedGame(int games[],int n)
{
    int freq[n]={0};
    for(int i=0;i<n;i++)
    {   if(freq[i]==-1){continue;}
        int count=1;
        for(int j=0;j<n;j++)
        {
            if(games[j]==games[i]){count++;freq[j]=-1;}
        }
        freq[i]=count;
    }
    int max=freq[i];
    for(int i=0;i<n;i++)
    {
        if(freq[i]==max){return -1;}
        if(freq[i]>max){max=freq[i];}
    }
    return max;

}
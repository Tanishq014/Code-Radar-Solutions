int mostPlayedGame(int games[],int n)
{
    int freq[100]={0};
    for(int i=0;i<n;i++)
    {   if(freq[i]==-1){continue;}
        int count=1;
        for(int j=0;j<n;j++)
        {
            if(games[j]==games[i]){count++;freq[j]=-1;}
        }
        freq[i]=count;
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(freq[i]==freq[max]){max=games[i]>games[max]?:max=i;}
        if(freq[i]>freq[max]){max=i;}
    }
    return games[max];

}
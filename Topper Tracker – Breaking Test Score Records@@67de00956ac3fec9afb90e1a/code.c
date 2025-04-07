void trackScores(int scores[],int n,int result[])
{   int max=scores[0],low=20258;
result[0]=0;result[1]=0;
    for(int i=0;i<n;i++)
    {
        if(scores[i]>max){result[0]++;max=scores[i];}
        else if(scores[i]<low){result[1]++;low=scores[i];}
    }
    result[1]--;
    
}

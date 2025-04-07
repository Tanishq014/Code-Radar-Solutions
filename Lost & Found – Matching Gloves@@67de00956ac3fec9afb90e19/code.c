int countGlovePairs(int gloves[],int n)
{
    int count=0;
    int freq[256]={0};
    for(int i=0;i<n;i++)
    {
        freq[gloves[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        count+=freq[i]/2;
    }
    return count;
}
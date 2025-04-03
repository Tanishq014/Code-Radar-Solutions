int mountainPeak(int n)
{
    if(n<=100){return -1;}
      
    char c[100];
    sprintf(c,"%d",n);
    int s,i=0,l=strlen(c)-1;
    int e;

//for(int i=0;c[i]!='\0';i++)

    while(s[i+1]>s[i])
    {
        //s=i;
        i++;

    }
    


//for(int i=strlen(c)-1;c[i]!='\0';i++)

    while(s[l-1]<s[l])
    {
        
        l--;
    }
    if(l==i)
    {
        return c[s];
    }
return -1;

}




}
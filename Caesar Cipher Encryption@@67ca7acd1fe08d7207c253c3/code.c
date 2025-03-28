void caesarCipher(char message[],int shift,char encrypted[])
{   int a=(int)'a';
    int last=a+26;
    int n=strlen(message);
    for(int i=0i<n;i++)
    {   if(isaplha(message[i]))
    { 
              int k=(int)message[i];
              if(k+shift<=last){encrypted[i]=(char)(k+shft);}
              else{encrypted[i]=(char)((k-last)+a);}
    }
    }
}
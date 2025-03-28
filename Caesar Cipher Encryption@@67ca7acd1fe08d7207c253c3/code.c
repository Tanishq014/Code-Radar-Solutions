#include <string.h>
void caesarCipher(char message[],int shift,char encrypted[])
{   int a=(int)'a';
    int last=a+26;
    int n=strlen(message);
    for(int i=0;i<n;i++)
    {   if(isalpha(message[i]))
    { 
              int k=(int)message[i];
              if(k+shift<=last){encrypted[i]=(char)(k+shift);}
              else{encrypted[i]=(char)((k-last)+a);}
    }
    }
}
#include <string.h>
#include <ctype.h>
void caesarCipher(char message[],int shift,char encrypted[])
{   
    int n=strlen(message);
    for(int i=0;i<n;i++)
    {   if(isalpha(message[i]))
    {   int a=islower(message[i])?(int)'a';(int)'A';
        int last=a+26;
              int k=(int)message[i];
              if(k+shift<=last){encrypted[i]=(char)(k+shift);}
              else{encrypted[i]=(char)((k-last)+a);}
    }
    }
}
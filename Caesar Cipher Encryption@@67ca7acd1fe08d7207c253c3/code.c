#include <string.h>
#include <ctype.h>
void caesarCipher(char message[],int shift,char encrypted[])
{   //shift = shift % 26;
    //if (shift < 0) shift += 26;
    int n=strlen(message);
    for(int i=0;i<n;i++)
    {   if(isalpha(message[i]))
    {   int a=islower(message[i])?(int)'a':(int)'A';
        int last=a+25;
              int k=(int)message[i];
              if(k+shift<=last){encrypted[i]=(char)(k+shift);}
              else{encrypted[i]=(char)((k + shift - a) % 26 + a);}
    }
    else {
            // Fix 3: Handle non-alphabetic characters
            encrypted[i] = message[i];
     }
    }
    
    encrypted[n] = '\0';


}
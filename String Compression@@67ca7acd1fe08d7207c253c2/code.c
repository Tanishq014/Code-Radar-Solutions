#include <string.h>
void compressString(char str[],char compressed[])
{
    int len=strlen(str);
    int conti=0;
    int count=1;
    int n=-1;
    for(int i=0;i<len;i++)
    {
        if( str[i]==str[i+1] )
        {count++;}
        else
        {
            if( count>2 ){compressed[++n]=str[i];compressed[++n]=count+'0';count=1;}
            else{compressed[++n]=str[i];count=1;}
        }
    }
    compressed[++n]='\0';
}
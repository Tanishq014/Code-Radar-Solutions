#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",&s);
    int i,j,k,start=0,end;
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]==' '||s[i]=='\0')
        {
            end=i;
            for(k=end-1;k>=start;k--)
            {
                printf("%c",s[k]);
            }start=end+1;if (s[i] == ' ') {
                printf(" ");
            }
        }
    }

}
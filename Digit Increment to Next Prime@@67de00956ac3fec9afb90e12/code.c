#include <stdio.h>

int change(int n)
{
    if(n==0||n==1||n==8||n==9){return 2;}
    //else if (n==2||n==4||n==6||)
}
int main()
{   int n;
    scanf("%d",&n);int out=0;
    int count=1;
    for(int i=0;n>0;i++)
    {
        int j=n%10;
        out=out+(change(j)*count*10);
        count++;
    }
    printf("%d",out);
    



}
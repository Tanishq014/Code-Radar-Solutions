int count(int x1,int v1,int x2,int v2)
{   int ct=0;
    while(x1+v1*ct!=x2+v2*ct)
    {
        ct++;
    }
    return ct;
}
int kangaroo(int x1,int v1,int x2,int v2)
{
    if(x1<x2&&v1>v2&&!(x2>2*x1)){return count(x1,v1,x2,v2);}
    else if(x1>x2&&v1<v2){ return count(x1,v1,x2,v2);}
    else{return -1;}
}
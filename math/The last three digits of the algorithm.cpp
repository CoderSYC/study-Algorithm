#include<cstdio>
int f(int a,int b)
{
    int t=1;
    while(b)
    {
        if(b%2!=0)
        {
            t=(t*a)%1000;
            b--;
        }
        a=a*a%1000;
        b/=2;
    }
    return t;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)&&a&&b)
    {
        printf("%d\n",f(a,b));
    }
}

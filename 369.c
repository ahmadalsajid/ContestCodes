#include<stdio.h>
long long int nCr(long long int a, long long int b)
    {
        long long int res=1,i;
        if(a-b<b) b=a-b;
        for(i=1;i<=b;i++,a--)
            {
                res*=a;
                res/=i;
            }
            return res;
    }
int main()
{
    long long int n,m,r;
    while(scanf("%lld %lld",&n,&m)&&n&&m){
        r=nCr(n,m);
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,r);
    }
    return 0;
}

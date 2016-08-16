#include<stdio.h>

long long int reverse( long long int r)
{
    long long int e=0,b;
    while(r!=0)
    {
        b=r%10;
        e=e*10+b;
        r=r/10;
    }

    return e;
}

int main()
{
    long long int a,b,c,r,g=0,t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
          g=0;

    scanf("%lld",&a);
    again: r=reverse(a);

    if((a-r)!=0)
    {
        c=a+r;
        a=c;
        g=g+1;
        goto again;
    }
    printf("%lld %lld\n",g,r);
    }

    return 0;

}

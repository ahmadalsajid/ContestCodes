#include<stdio.h>
long int gcd(long int x, long int y)
    {
        long int i;
        if(y<x)
            {
                i=x;
                x=y;
                y=i;
            }

        if(x) return gcd(y%x,x);
        else return y;

    }
int main()
{
    long int a,b,s;
    while(scanf("%ld %ld",&a,&b)==2){
     s=gcd(a,b);
     if(s==1) printf("%10d%10d    Good Choice\n\n",a,b);
     else printf("%10d%10d    Bad Choice\n\n",a,b);
    }
    return 0;
}

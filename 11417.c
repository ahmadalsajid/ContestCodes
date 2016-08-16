#include<stdio.h>
long int gcd(long int x,long int y)
{
    long int t;
    if(y<x)
        {
            t=x;
            x=y;
            y=t;
        }

    if(x) return gcd(y%x, x);
    else return y;
}

int main()
{
    long int n, g,i,j;
    while(scanf("%ld",&n)&&n){
        g=0;
        for(i=1;i<n;i++)
            {
                for(j=i+1;j<=n;j++)
                    {
                        g+=gcd(i,j);
                    }
            }
        printf("%ld\n",g);
    }
    return 0;
}

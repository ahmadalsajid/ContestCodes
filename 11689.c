#include<stdio.h>

int main()
{
    unsigned int t,T,a,c,tc,b,rb,nc,bl;
    scanf("%u",&T);
    for(t=0;t<T;t++)
        {
            scanf("%u %u %u",&c,&a,&bl);
             tc=0;
                b=c+a;
                for(;b>=bl;)
                    {
                        nc=b/bl;
                        rb=b%bl;
                        b=nc+rb;
                        tc+=nc;
                    }
                printf("%u\n",tc);
        }
    return 0;
}


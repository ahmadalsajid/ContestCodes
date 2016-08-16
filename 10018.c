#include<stdio.h>
long long int rev(long long int a)
    {
        long long int ren=0,rem;
        for(;a!=0;)
            {
                rem=a%10;
                a=a/10;
                ren=ren*10+rem;
            }
            return ren;
    }
int main()
{
    long long int n,r,t,T,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%lld",&n);
            for(i=0;i<1005;i++)
                {
                    r=rev(n);
                    if(n==r)
                        {
                            printf("%lld %lld\n",i,r);
                            break;
                        }
                    else n+=r;
                }
        }
    return 0;
}

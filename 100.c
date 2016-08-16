#include<stdio.h>
int main()
{
    long long int i,l,t,u,a,mi;
    while(scanf("%lld %lld",&l,&u)==2){
    if(u>l)
        {
            mi=0;
            for(t=l;t<=u;t++)
                {
                    a=t;
                    for(i=1;a!=1;i++)
                        {
                            if(a%2==1)
                                {
                                    a=3*a+1;
                                }
                            else if(a%2==0)
                                {
                                    a=a/2;
                                }
                        }
                        if(i>=mi) mi=i;
                }
        printf("%lld %lld %lld\n",l,u,mi);
        }
    else
        {
                    mi=0;
            for(t=u;t<=l;t++)
                {
                    a=t;
                    for(i=1;a!=1;i++)
                        {
                            if(a%2==1)
                                {
                                    a=3*a+1;
                                }
                            else if(a%2==0)
                                {
                                    a=a/2;
                                }
                        }
                        if(i>=mi) mi=i;
                }
                printf("%lld %lld %lld\n",l,u,mi);
            }
    }
        return 0;
}

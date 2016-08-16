#include<stdio.h>
int main()
{
    long long int n,s,d,x,y,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%lld %lld",&s,&d);
            if(d>s)printf("impossible\n");
            else if(((s%2)==0&&(d%2)==1)||((s%2)==1&&(d%2)==0)) printf("impossible\n");
            else if((s%2)==1&&d==0) printf("impossible\n");
            else if((s%2)==0&&d==0) printf("%lld %lld\n",s/2,s/2);
            else
                {
                    x=(s+d)/2;
                    y=s-x;
                   printf("%lld %lld\n",x,y);
                }
        }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

long long int dec(long long int x)
{
    long long int i,r,num=0;
    for(i=0;x!=0;i++)
        {
            r=x%10;
            x=x/10;
            num+=pow(2,i)*r;
        }
    return num;
}
int main()
{
    long long int a,b,c,d,e,f,g,h,t,T,ed,fd,gd,hd;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%lld.%lld.%lld.%lld",&a,&b,&c,&d);
            scanf("%lld.%lld.%lld.%lld",&e,&f,&g,&h);
            ed=dec(e);
            fd=dec(f);
            gd=dec(g);
            hd=dec(h);
            if((a==ed)&&(b==fd)&&(c==gd)&&(d==hd)) printf("Case %llu: Yes\n",t);
            else printf("Case %llu: No\n",t);
        }
    return 0;
}

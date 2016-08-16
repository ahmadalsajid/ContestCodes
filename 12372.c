#include<stdio.h>
int main()
{
    int t,T,a,b,c;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(a<21&&b<21&&c<21) printf("Case %d: good\n",t);
            else printf("Case %d: bad\n",t);
        }
    return 0;
}

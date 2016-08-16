#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,a[33],i,t,T,s,c,l;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%d %d %d",&n,&p,&q);
            for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
             s=0;c=0;
            if(n<p) l=n;
            else l=p;
            for(i=0;i<l;i++)
                {
                    s+=a[i];
                    if(s<=q)c++;
                }
            printf("Case %d: %d\n",t,c);
        }
    return 0;
}

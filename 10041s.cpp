#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    long long int s[502],t,T,i,r,d,avg;
    scanf("%lld",&T);
    for(t=0;t<T;t++)
        {
            scanf("%lld",&r);
        for(i=0;i<r;i++)
            {
                scanf("%lld",&s[i]);
            }
        sort(s,s+r);
        if(r%2) i=(r/2);
        else i=(r/2)-1;
        avg=s[i];
        d=0;
        for(i=0;i<r;i++)
            {
                d+=abs(avg-s[i]);
            }
        printf("%lld\n",d);
    }
    return 0;
}

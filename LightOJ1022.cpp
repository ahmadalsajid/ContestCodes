#include<bits/stdc++.h>

using namespace std;
#define pi  acos(-1)
int main()
{
    int cs,i;
    double ans,n,sqr,crcl;
    cin>>cs;
    for(i=1;i<=cs;i++)
    {
        cin>>n;
        sqr = n*n*4;
        crcl = pi*n*n;
        ans = sqr-crcl;
        printf("Case %d: %.2lf\n",i,ans);
    }
    return 0;
}

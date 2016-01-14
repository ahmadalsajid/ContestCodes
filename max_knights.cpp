#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,m,t,cs;
    double ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        scanf("%lf %lf",&n,&m);
        ans = ceil((n*m)/2);
        printf("Case %d: %d\n",i,(int)ans);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int cs, ans, n,i,j,tmp;
    cin>>cs;
    for(i=1;i<=cs;i++)
    {
        cin>>n;
        ans=0;
        for(j=0;j<n;j++)
        {
            cin>>tmp;
            if(tmp>0) ans+=tmp;
        }
        printf("Case %ld: %ld\n",i,ans);
    }
    return 0;
}

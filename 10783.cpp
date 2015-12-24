#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cs, a,b,ans;
    cin>>cs;
    for(int i=1;i<=cs;i++)
    {
        ans=0;
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            if(j%2) ans+=j;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}

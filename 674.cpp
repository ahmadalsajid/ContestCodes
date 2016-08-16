#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[6][8000],make;
ll i,j,n;
ll coin[] = {1,5,10,25,50};

ll rec(ll i, ll amount)
{
    ll call1=0,call2=0;
    if(i>=5)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    if(amount-coin[i]>=0) call1=rec(i,amount-coin[i]);
    call2 = rec(i+1,amount);
    return dp[i][amount] = call1+call2;
}



int main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>make)
    {
        ll ans = rec(0,make);
        cout<<ans<<endl;
    }

    return 0;
}

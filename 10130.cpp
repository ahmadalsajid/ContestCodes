#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

#define maxm 1000000
#define ABS(a)	   (((a) < 0) ? -(a) : (a))
#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#define MIN(a, b)  (((a) < (b)) ? (a) : (b))
#define ll long long int
#define mem(x,y) memset(x, y, sizeof(x))
template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

int dp[1005][105],cap,n;
int weight[1005], cost[1005];

int call(int i,int w)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1=0;
    if(w+weight[i]<=cap)    profit1 = cost[i] + call(i+1, w+ weight[i]);
    else profit1=0;
    int profit2 = call(i+1,w);
    return dp[i][w] = max(profit1,profit2);

}


int main()
{
    int cs;
    cin>>cs;
    while(cs--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>cost[i]>>weight[i];
        }

        int ans=0,result,mmbr;
        cin>>mmbr;
        for(int i=1;i<=mmbr;i++)
        {
            mem(dp,-1);
            cin>>cap;
            result = call(1,0);
            ans+=result;
        }
        cout<<ans<<endl;


    }
    return 0;
}

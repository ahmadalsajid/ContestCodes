#include<bits/stdc++.h>
using namespace std;
#define maxm 100004
int main()
{
    int n,h, tmp,i,ans=0;
    cin>>n>>h;

    for(i =0;i<n;i++)
    {
        cin>>tmp;
        if(tmp<=h) ans+=1;
        else
        {
            if(tmp%h==0)
            {
                ans += (tmp/h);
            }
            else
            {
                ans += (tmp/h)+1;
            }

        }
    }
    cout<<ans<<endl;

    return 0;
}

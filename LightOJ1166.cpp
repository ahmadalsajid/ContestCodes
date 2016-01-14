#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[105],i,j,k,t,T,cs,n,cnt;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        cnt=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]!=i)
            {
                for(j=i+1;j<=n;j++)
                {
                    if(a[j]==i)
                    {
                        swap(a[i],a[j]);
                        cnt++;
                    }
                }
            }
        }
        printf("Case %d: %d\n",t,cnt);
    }

    return 0;
}

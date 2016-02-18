#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[13],t,i,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        for(i=0;i<13;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+13);
        if(ar[0]==0)
        {
            printf("Set #%d: No\n",t);
        }
        else
        {
            printf("Set #%d: Yes\n",t);
        }
    }
    return 0;
}

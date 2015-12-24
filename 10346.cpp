#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sig, butt,new_sig, new_butt,ans;
    while(cin>>sig>>butt)
    {
        ans =0;
        new_butt = sig;
        while(new_butt>=butt){
            new_sig = new_butt/butt;
            new_butt = new_butt%butt;
            new_butt += +new_sig;
            ans+=new_sig;
        }
        cout<<ans+sig<<endl;
    }
    return 0;
}

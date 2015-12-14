#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int cs,a,b;
    cin>>cs;
    while(cs--){
        cin>>a>>b;
        if(a<b) cout<<"<"<<endl;
        else if(a>b) cout<<">"<<endl;
        else cout<<"="<<endl;
    }
    return 0;
}

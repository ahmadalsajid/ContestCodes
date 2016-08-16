#include<iostream>
using namespace std;
long long big_mod(long long b, long long p, long long m){
    if(p==0) return 1;
    long long x=big_mod(b,p/2,m);
    x=(x*x)%m;
    if((p%2)==1)
    {
        x=(x*b)%m;
    }
    return x%m;
}
int main()
{
    long long b,p,m,r;
    while((cin>>b>>p>>m)!=NULL){
        r=big_mod(b,p,m);
        cout<<r<<endl;
    }
    return 0;
}

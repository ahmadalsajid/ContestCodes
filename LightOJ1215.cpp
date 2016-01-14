#include<bits/stdc++.h>
using namespace std;
#define lld long long int
template<class T>T gcd(T a, T b){return b==0 ? a: gcd(b, a%b);}
template<class T>T lcm(T a, T b){return a * b / gcd(a,b);}

//https://www.quora.com/L-is-the-Least-Common-Multiple-of-a-b-c-How-can-I-find-the-minimum-c-knowing-a-b-and-L


int main()
{
    lld t,T,a,b,c,l,k,g;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        cin>>a>>b>>l;
        k = lcm(a,b);
        printf("Case %d: ",t);
        if(l%k !=0)
        {
            printf("impossible\n");
            continue;
        }
        g = gcd(k,l/k);
        c = l/k *g;
        while(lcm(k,c)<l)
        {
            c*=l/lcm(k,c);
        }
        cout<<c<<endl;
    }
    return 0;
}

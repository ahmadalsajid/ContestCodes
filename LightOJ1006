#include<iostream>
using namespace std;
int main()
{
    long long int  fn[10005],a,b,c,d,e,f,n,i, cn= 0, cs;
    cin>>cs;
    while( cs-- ) {
        cin>>fn[0]>>fn[1]>>fn[2]>>fn[3]>>fn[4]>>fn[5]>>n;
        for(i=6;i<=n;i++)
            {
                fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6])%10000007;
            }
        cout<<"Case "<<++cn<<": "<<fn[n]%10000007<<endl;
    }
    return 0;
}

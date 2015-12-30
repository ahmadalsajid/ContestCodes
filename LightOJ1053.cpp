#include<bits/stdc++.h>

using namespace std;
#define pi  acos(-1)
int main()
{
    long long int a,b,c,i,cs;
    cin>>cs;
    for(i=1;i<=cs;i++)
    {
        cin>>a>>b>>c;
        if((a*a)==((b*b)+(c*c))||(b*b)==((c*c)+(a*a))||(c*c)==((a*a)+(b*b))) printf("Case %lld: yes\n",i);
        else printf("Case %lld: no\n",i);
    }
    return 0;
}

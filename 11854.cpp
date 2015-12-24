#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>c){
        if(!a && !b &&!c) break;
        if((a*a)==((b*b)+(c*c))||(b*b)==((c*c)+(a*a))||(c*c)==((a*a)+(b*b))) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}


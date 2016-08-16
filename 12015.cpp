#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;

#define maxm 100000
#define ABS(a)	   (((a) < 0) ? -(a) : (a))
#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#define MIN(a, b)  (((a) < (b)) ? (a) : (b))

template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

struct node{
    string name;
    int value;
};

bool cmp(node a, node b){
    return a.value<b.value;
}

int main()
{
    int cs,cn=0,i;
    node tmp;

    cin>>cs;
    while(cs--){
            vector<node>v;
        for(i=0;i<10;i++)
        {
            cin>>tmp.name>>tmp.value;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end(),cmp);
        int dt = v[9].value;
        printf("Case #%d:\n",++cn);
        for(i=9;i>=0;i--)
        {
            if(v[i].value==dt)
            {
                cout<<v[i].name<<endl;
            }
        }
    }

    return 0;
}

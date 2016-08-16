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

int check[max];
template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

int main()
{
    int edge,node,i,vsize,x,y,tmp;
    vector< int > V[max];
    memset(check,0,sizeof(check));
    while(cin>>node){
        if(cs==0) break;
        cin>>edge;
        for(i=0;i<edge;i++)
        {
            cin>>x>>y;
            V[x].push_back(y);
            V[y].push_back(x);
        }

        queue< int > Q;
        q.push(0);
        visit[0]=1;

    }

    return 0;
}

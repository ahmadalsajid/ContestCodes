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

#define maxm 1000005
#define ABS(a)	   (((a) < 0) ? -(a) : (a))
#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#define MIN(a, b)  (((a) < (b)) ? (a) : (b))
#define ll long long int
#define mem(x,y) memset(x, y, sizeof(x))
template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

int main()
{
    char line[maxm];
    int st,nd,qry,i,ta,tb,cs=0;
    while(scanf("%s",line)==1)
    {
        if(!strcmp("\n",line)) return 0;
        cin>>qry;
        printf("Case %d:\n",++cs);
        while(qry--)
        {
            cin>>ta>>tb;
            if(ta==tb)
            {
                printf("Yes\n");
                continue;
            }
           if(ta>tb)
            {
                st=tb;
                nd=ta;
            }
            else
            {
                st=ta;
                nd=tb;
            }
           bool flag  = true;
           for(i=st;i<nd;st++)
           {
               if(line[i]!=line[i+1])
               {
                   printf("No\n");
                   flag = false;
               }
           }
           if(flag) printf("Yes\n");

        }

    }
    return 0;
}

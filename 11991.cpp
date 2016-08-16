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

#define maxm 1000000
#define ABS(a)	   (((a) < 0) ? -(a) : (a))
#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#define MIN(a, b)  (((a) < (b)) ? (a) : (b))
#define ll long long int
#define mem(x,y) memset(x, y, sizeof(x))
template<class T>T gcd(T a,T b)
{
    return b == 0 ? a : gcd(b, a % b);
}
template<typename T>T lcm(T a, T b)
{
    return a / gcd(a,b) * b;
}

int main()
{
    ll ar[maxm],n,m,k,v,ocr,i,j;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        for(i=0; i<n; i++) scanf("%lld",&ar[i]);
        for(i=0; i<m; i++) // searching
        {
            scanf("%lld %lld",&k,&v);
            ocr=0;
            for(j=0; j<n; j++)
            {
                if(ar[j]== v) ocr++;
                if(ocr==k) break;
            }
            if(ocr==k) printf("%lld\n",j+1);
            else printf("0\n");
        }
    }

    return 0;
}



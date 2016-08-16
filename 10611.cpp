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

#define ll long long
lla[maxm],tmp,i,hts,qry;
bool lowest,highest;



int main()
{

    cin>>hts;
    for(i=0;i<hts;i++) cin>>a[i];
    cin>>qry;
    for(i=0;i<qry;i++)
    {
        lowest=highest=false;
        cin>>tmp;
        BinarySearch(tmp);

    }

    return 0;
}


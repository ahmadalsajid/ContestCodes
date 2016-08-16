//header files
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
//#include<bits/stdc++.h>
using namespace std;

#define maxm 100000
#define ABS(a)	   (((a) < 0) ? -(a) : (a))
#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#define MIN(a, b)  (((a) < (b)) ? (a) : (b))

template<class T>T      gcd(T a,T b)    {return b == 0 ? a : gcd(b, a % b);}
template<class T>T   lcm(T a, T b)   {return a / gcd(a,b) * b;}

int main()
{
    long cs,x,y,x_pos,y_pos;
    while((cin>>cs)&&cs)
    {
        cin>>x>>y;
        while(cs--)
        {
            cin>>x_pos>>y_pos;
            if(ABS(x_pos)==ABS(x)||ABS(y_pos)==ABS(y))
            {
                cout<<"divisa"<<endl;
                continue;
            }
            if(x_pos>x&&y_pos>y)
            {
                cout<<"NE"<<endl;
            }
            else if(x_pos<x&&y_pos>y)
            {
                cout<<"NO"<<endl;
            }
            else if(x_pos<x&&y_pos<y)
            {
                cout<<"SO"<<endl;
            }
            else if(x_pos>x&&y_pos<y)
            {
                cout<<"SE"<<endl;
            }
        }
    }

    return 0;
}

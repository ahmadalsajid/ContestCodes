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
int gcd(int a, int b){
    return b==0? a : gcd(b,a%b);
}
int main()
{
    char line[maxm];
    int cases,num,g,maxgcd,i,j,tmp;
    scanf("%d",&cases);
    getchar();
        while(cases--){
            gets(line);
            stringstream ss(line);
            vector< int >v;

            while(ss>>num) v.push_back(num);
            int sizev=v.size();
            maxgcd=0;
           for(i=0;i<sizev;i++)
            {
                for(j=0;j<sizev;j++)
                {
                    if(i==j) continue;
                    tmp=gcd(v[i],v[j]);
                    if(tmp>maxgcd) maxgcd=tmp;
                }
            }
            cout<<maxgcd<<endl;

        }


    return 0;
}

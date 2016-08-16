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

template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

int main()
{
    int cs,i,n;
    char str[25];
    cin>>cs;
    while(cs--)
    {
        int ar[105]={0};
        scanf("%d",&n);
        getchar();
        for(i=1;i<=n;i++)
        {
            gets(str);
            if(!strcmp(str,"LEFT"))
            {
                ar[i]=-1;
            }
            else if(!strcmp(str,"RIGHT"))
            {
                ar[i]=1;
            }
            else
            {
                int len =strlen(str);
                char num[3];
                num[0]=str[len-2];
                num[1]=str[len-1];
                int digit= atoi(num);
                ar[i]=ar[digit];
            }
        }
        int ans=0;
        for(i=0;i<=n;i++)
        {
            ans+=ar[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int counter, a,b,sqt;
    while(cin>>a>>b){
        if(!a && !b) break;
        counter =0;
        for( int i=a;i<=b;i++)
        {
            sqt = sqrt(i);
            if((sqt*sqt)==i) counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}



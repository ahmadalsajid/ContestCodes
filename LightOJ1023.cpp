#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cs=0,t,n,k,i,j;
    char ar[26];
    for(i=0;i<26;i++)
    {
        ar[i]=65+i; //set ABCD
    }
    cin>>t;
    while(t--){
        cin>>n>>k;
        sort(ar,ar+26);
        printf("Case %d:\n",++cs);
        int counter=0;
        do{
            for(i=0;i<n;i++)
            {
                cout<<ar[i];
            }
            cout<<"\n";
            counter++;
            if(counter==k) break;
        }while(next_permutation(ar,ar+n));

    }

    return 0;
}

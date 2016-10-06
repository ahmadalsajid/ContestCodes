#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ar[55];
    while(cin>>ar){
        if('#'==ar[0]) break;
        int l = strlen(ar);
        if(next_permutation(ar, ar+l)){
                cout<<ar<<endl;
        }
        else
        {
            printf("No Successor\n");
        }


    }
    return 0;
}

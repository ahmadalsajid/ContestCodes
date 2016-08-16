#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,num;
    cin>>n;
    int ar[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>ar[i][j];
        }
    }
    bool yes = true;
    for(i=0;i<3;i++)
    {
        num =0;
        for(j=0;j<n;j++)
        {
            num+=ar[j][i];
        }
        if(num) yes = false;

    }
    if(yes) printf("YES\n");
    else printf("NO\n");

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ar[5],cnt,ans;
    while(cin>>n)
    {
        if(!n) break;
        while(n--)
        {
            cnt=0;
            for(i=0;i<5;i++)
            {
                cin>>ar[i];
            }
            for(i=0;i<5;i++)
            {
                if(ar[i]<=127)
                {
                    ans = i;
                    cnt++;
                }
            }
            if(cnt==1)
            {
                printf("%c\n",'A'+ans);
            }
            else
            {
                printf("*\n");

            }
        }
    }
    return 0;
}

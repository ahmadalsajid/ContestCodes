#include<bits/stdc++.h>
using namespace std;
#define maxm 100005
int main()
{
    char str[maxm];
    int n,l,i,j, a[26];
    cin>>n;
    getchar();
    gets(str);
    //l = strlen(str);
    if(n>26)
    {
        cout<<-1<<endl;
    }
    else
    {
        sort(str,str+n);
        int unique_letter=0;
        for(i=0;i<n;i++)
        {
            a[str[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]>0) a[i]-=1;
        }
        int tot=0;
        for(i=0;i<26;i++)
        {
            if(a[i]>0) tot+=a[i];
        }
        if(tot==0) cout<<0<<endl;
        else cout<<tot<<endl;
    }
    return 0;
}

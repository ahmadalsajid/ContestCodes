#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define lln long long int

lln ar[MAX];
lln tree[4*MAX];

void build(lln l, lln r, lln indx)
{
    if(l==r)
    {
        tree[indx] = ar[l];
        return;
    }
    lln mid =(l+r)/2;
    build(l,mid,2*indx);
    build(mid+1,r,(2*indx)+1);
    tree[indx]= min(tree[2*indx], tree[(2*indx)+1]);
}

lln query(lln l, lln r, lln indx, lln x, lln y)
{
    if(x>r || y<l) return MAX;
    if(l>=x && r<=y)
    {
        return tree[indx];

    }
    lln mid =(l+r)/2;
    lln c1=0,c2=0;
    c1 = query(l,mid,2*indx,x,y);
    c2 = query(mid+1,r,(2*indx)+1,x,y);
    return min(c1,c2);
}


int main()
{
    lln cs,cn=0,i,n,q,j,x,y;
    scanf("%lld",&cs);
    while(cs--){
        cin>>n>>q;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        build(1,n,1);
        printf("Case %lld:\n",++cn);
        for(j=1;j<=q;j++)
        {
            scanf("%lld %lld",&x,&y);
            lln ans = query(1,n,1,x,y);
            printf("%lld\n",ans);
        }
    }
    return 0;
}

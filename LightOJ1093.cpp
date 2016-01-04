#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define inf INT_MAX
#define lln long long int

lln ar[MAX];
lln min_tree[4*MAX];
lln max_tree[4*MAX];

void build(lln l, lln r, lln indx)
{
    if(l==r)
    {
        min_tree[indx] = ar[l];
        max_tree[indx] = ar[l];
        return;
    }
    lln mid =(l+r)/2;
    build(l,mid,2*indx);
    build(mid+1,r,(2*indx)+1);
    min_tree[indx]= min(min_tree[2*indx], min_tree[(2*indx)+1]);
    max_tree[indx]= max(max_tree[2*indx], max_tree[(2*indx)+1]);
}

lln min_query(lln l, lln r, lln indx, lln x, lln y)
{
    if(x>r || y<l) return inf;
    if(l>=x && r<=y)
    {
        return min_tree[indx];
    }
    lln mid =(l+r)/2;
    lln c1=0,c2=0;
    c1 = min_query(l,mid,2*indx,x,y);
    c2 = min_query(mid+1,r,(2*indx)+1,x,y);
    return min(c1,c2);
}

lln max_query(lln l, lln r, lln indx, lln x, lln y)
{
    if(x>r || y<l) return -inf;
    if(l>=x && r<=y)
    {
        return max_tree[indx];
    }
    lln mid =(l+r)/2;
    lln c1=0,c2=0;
    c1 = max_query(l,mid,2*indx,x,y);
    c2 = max_query(mid+1,r,(2*indx)+1,x,y);
    return max(c1,c2);
}


int main()
{
    lln cs,cn=0,i,n,q,j,x,y,d,ans;
    scanf("%lld",&cs);
    while(cs--){
        scanf("%lld %lld",&n,&d);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        build(1,n,1);
        ans=0;

        for(i=1;i<=n-d;i++)
        {
            ans = max((max_query(1,n,1,i,i+d-1)-min_query(1,n,1,i,i+d-1)),ans);
        }
        printf("Case %lld: %lld\n",++cn,ans);


    }
    return 0;
}

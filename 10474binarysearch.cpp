#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long int a[100000],n,f,l,m,s,q,qa[100000],i,j,c=1;
    while(scanf("%ld %ld",&n,&q)){
        if(n==0&&q==0) break;
    for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
    sort(a,a+n);
    for(i=0;i<q;i++)
        {
            scanf("%ld",&qa[i]);
        }
    printf("CASE# %ld:\n",c);
    c++;
    for(i=0;i<q;i++)
        {
            s=qa[i];
            int fd=0;
            f=0;l=n-1;m=(f+l)/2;
            while(f<=l){

                if(a[m]<s)
                    {
                        f=m+1;
                    }
                else if(a[m]==s)
                    {
                        printf("%ld found at %ld\n",s,m+1);
                        break;
                    }
                else
                    {
                        l=m-1;
                    }
                        m=(f+l)/2;
            }
           if(f>l) printf("%ld not found\n",s);
        }
    }
    return 0;
}

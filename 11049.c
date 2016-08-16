#include<stdio.h>
int main()
{
    long long int t,n,a[18],i,p,no,flag=0;
    t=1;
    while(scanf("%lld",&n)==1){
        for(i=0;i<n;i++)
            {
                scanf("%lld",&a[i]);
            }
        p=1;
        no=0;
        for(i=0;i<n;i++)
            {
                if(a[i]>=0)
                    {
                        p*=a[i];
                        no=1;
                    }
            }
        if(no==1) printf("Case #%lld: The maximum product is %lld.\n\n",t,p);
        else printf("Case #%lld: The maximum product is 0.\n\n",t);
        t++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long int i,n,a[52];
            a[0]=1;
            a[1]=2;
            for(i=2;i<52;i++)
                {
                    a[i]=a[i-1]+a[i-2];
                }
    while(scanf("%lld",&n)==1){
        if(!n) break;
            printf("%lld\n",a[n-1]);
        }
    return 0;

}

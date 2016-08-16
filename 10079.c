#include<stdio.h>
int main()
{
    long long int i,n,s;
    while(scanf("%lld",&n)&&n>-1){
        s=0;
        for(i=1;i<=n;i++)
            {
                s+=i;
            }
        printf("%lld\n",s+1);
    }
    return 0;
}

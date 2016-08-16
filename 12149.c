#include<stdio.h>
int main()
{
    unsigned long long int t,n,i;
    while(scanf("%llu",&n)&&n){
        t=0;
        for(i=1;i<=n;i++)
            {
                t+=i*i;
            }
        printf("%llu\n",t);
    }
    return 0;
}

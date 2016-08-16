#include<stdio.h>
int main()
{
    long n,ans;
    while(scanf("%ld",&n)&&n)
    {
        ans=0;
        while(n>1)
        {
            ++ans;
            n>>=1;
        }
        printf("%ld\n",ans);
    }
    return 0;
}

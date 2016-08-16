#include<stdio.h>
long long int f91(long long int n)
{
    if(n>=101) return(n-10);
    else return (f91(f91(n+11)));
}
int main()
{
    long long int in,r;
    while(scanf("%lld",&in)&&in){
        r=f91(in);
        printf("f91(%lld) = %lld\n",in,r);
    }
    return 0;
}

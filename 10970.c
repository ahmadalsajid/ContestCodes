#include<stdio.h>
int main()
{
    long long int a,b,tc,s,i,j;
    while((scanf("%lld %lld",&a,&b))==2){
        tc=0;
       for(i=0;i<a;i++)
        {
            tc+=(b-1);
        }
        tc+=(a-1);
        printf("%lld\n",tc);
    }
    return 0;
}

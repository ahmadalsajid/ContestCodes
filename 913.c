#include<stdio.h>
int main()
{
    unsigned long long int n,l,r;
    while(scanf("%llu",&n)==1){
        l=(n+1)/2;
        r=3*((2*(l*l))-3);
        printf("%llu\n",r);
    }
    return 0;
}

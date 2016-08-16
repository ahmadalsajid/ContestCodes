#include<stdio.h>
unsigned long long int nCr(unsigned long long int x, unsigned long long int y)
{
    unsigned long long int i,res=1;
    if(x-y<y) y=x-y;
    for(i=1;i<=y;i++,x--)
        {
            res*=x;
            res/=i;
        }
    return res;
}
int main()
{
    unsigned long long int a,b,res;
    while(scanf("%llu %llu",&a,&b)==2){
        if(a==0&&b==0) break;
        res=nCr(a,b);
        printf("%llu\n",res);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    unsigned long long int x,i,tc;
    while(scanf("%llu",&x)==1){
    tc=0;
    for(i=1;i<=x;i++)
        {
            tc+=i*i*i;
        }
    printf("%llu\n",tc);
    }
    return 0;
}

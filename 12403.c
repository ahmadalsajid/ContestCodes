#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,T,tk,ta=0;
    char c[10];
    scanf("%lld",&T);
    getchar();
    for(i=1;i<=T;i++)
        {
            scanf("%s",c);
            if(!strcmp("donate",c))
                {
                    scanf("%lld",&tk);
                    ta+=tk;
                }
            else if(!strcmp("report",c)) printf("%lld\n",ta);
        }
    return 0;
}

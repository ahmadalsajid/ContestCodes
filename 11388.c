#include<stdio.h>
int main()
{
    unsigned long int a,b,t,T;
    scanf("%lu",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%lu %lu",&a,&b);
            if(!(b%a)) printf("%lu %lu\n",a,b);
            else printf("-1\n");
        }
    return 0;
}


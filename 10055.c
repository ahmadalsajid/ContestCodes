#include<stdio.h>

int main()
{
    unsigned long long int h,o;
    scanf("%llu %llu",&h,&o);
    if(h>o) printf("%llu\n",h-o);
    else printf("%llu\n",o-h);
    return 0;
}


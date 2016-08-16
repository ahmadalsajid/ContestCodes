#include<stdio.h>
int main()
{
    unsigned long long int h,o;

    while(scanf("%llu %llu",&h,&o)==2){
    if(h>o) printf("%llu\n",h-o);
    else printf("%llu\n",o-h);
    }
    return 0;
}

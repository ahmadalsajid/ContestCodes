#include<stdio.h>

int main()
{
    unsigned int c,tc,b,rb,nc,bl;

    while(scanf("%u %u",&c,&bl)==2){
        tc=0;
    b=c;
    for(;b>=bl;)
        {
            nc=b/bl;
            rb=b%bl;
            b=nc+rb;
            tc+=nc;
        }
    printf("%u\n",c+tc);
    }
    return 0;
}

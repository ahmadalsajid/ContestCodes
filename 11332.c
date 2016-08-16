#include<stdio.h>
int main()
    {
        unsigned long n,d,fn,ffn,fffn,r;
        while(scanf("%lu",&n)&&n!=0){
            d=n;
            fn=0;
            for(;d>0;)
                {
                    r=d%10;
                    d=d/10;
                    fn+=r;
                }
            ffn=0;
            for(;fn>0;)
                {
                    r=fn%10;
                    fn=fn/10;
                    ffn+=r;
                }
            fffn=0;
            for(;ffn>0;)
                {
                    r=ffn%10;
                    ffn=ffn/10;
                    fffn+=r;
                }
            printf("%lu\n",fffn);
            }
        return 0;
    }

#include<stdio.h>
int main()
{
    int c,i;
    while(scanf("%d",&c)==1)
    {
           int nrb,nc=1,rb=1,tc=0;
              nrb=c+1;
            for(;nc>0;)
            {
              nc=nrb/3;
              rb=nrb%3;
              nrb=nc+rb;
              tc=tc+nc;
            }
            printf("%d\n",c+tc);
           }
    return 0;
}

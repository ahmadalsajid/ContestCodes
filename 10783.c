#include<stdio.h>

int main()
{
    unsigned int a,b,T,i,j,t;
    scanf("%u",&T);
    for(i=0;i<T;i++)
        {
               t=0;
                scanf("%u",&a);
                scanf("%u",&b);
                for(j=a;j<=b;j++)
                    {
                            if(j%2) t+=j;
                    }
                    printf("Case %u: %u\n",i+1,t);
        }


    return 0;
}

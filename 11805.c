#include<stdio.h>
int main()
{
    int n,k,p,T,t,i;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%d %d %d",&n,&k,&p);
            for(i=1;i<=p;i++)
                {
                    k+=1;
                    if(k>n) k=1;
                }
            printf("Case %d: %d\n",t,k);
        }
    return 0;
}

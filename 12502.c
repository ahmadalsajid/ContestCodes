#include<stdio.h>
int main()
{
    int a,b,c,r,t,T;
    scanf("%d",&T);
    for(t=0;t<T;t++)
        {
            scanf("%d %d %d",&a,&b,&c);
            r=c*(a+(a-b))/(a+b);
            printf("%d\n",r);
        }
    return 0;
}

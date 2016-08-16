#include<stdio.h>
int main()
{
    int a[12],t,T,n,i,c;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%d",&n);
            c=n/2;
            for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
            printf("Case %d: %d\n",t,a[c]);
        }
    return 0;
}

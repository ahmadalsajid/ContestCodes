#include<stdio.h>
int main()
{
    int n,f,a,b,c,ep,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            ep=0;
            scanf("%d",&f);
            for(j=1;j<=f;j++)
                {
                    scanf("%d %d %d",&a,&b,&c);
                    ep+=a*c;
                }
            printf("%d\n",ep);
        }
    return 0;
}

#include<stdio.h>
int main()
{
    int t,T,i,n,a[52],hj,lj;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%d",&n);
            for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
            hj=0;
            lj=0;
            if(n==1) {printf("Case %d: 0 0\n",t);continue;}

            else
                {
                    for(i=0;i<n-1;i++)
                        {
                            if(a[i]-a[i+1]>0) lj++;
                            else if(a[i]-a[i+1]<0) hj++;
                        }
                }
           printf("Case %d: %d %d\n",t,hj,lj);
        }
    return 0;
}

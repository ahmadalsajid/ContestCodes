#include<stdio.h>
#include<math.h>
int main()
{
    int i,c;
    double w,l,r,rc,gs;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
        {
            scanf("%lf",&l);
            w=3.0*l/5.0;
            r=l/5.0;
            rc=acos(-1)*r*r;
            gs=(l*w)-rc;
            printf("%.2lf %.2lf\n",rc,gs);
        }
    return 0;
}

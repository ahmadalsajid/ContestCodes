#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,r;

    while(scanf("%lf%lf",&a,&b)==2)
    {
        a=1/a;
        r=pow(b,a);
        printf("%.0lf\n",r);
    }
    return 0;
}

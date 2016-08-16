#include<stdio.h>
int main()
{
    double i,t,T,c,f,cc;
    scanf("%lf",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%lf %lf",&c,&f);
            cc=5*f/9;
            printf("Case %.0lf: %.2lf\n",t,c+cc);
        }
    return 0;
}

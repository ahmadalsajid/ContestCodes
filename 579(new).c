#include<stdio.h>
#include<math.h>
int main()
{
    double h,m,an,ha,ma;
    while(scanf("%lf:%lf",&h,&m)){

        if(!h&&!m) break;
    ha=60*h;
    ma=11*m;
    an=(ha-ma)/2;
    if(an<0) an*=-1;
    if(an>180) an=360-an;
    printf("%.3lf\n",an);
    }
    return 0;
}

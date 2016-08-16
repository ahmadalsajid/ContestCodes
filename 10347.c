#include<math.h>
#include<stdio.h>
int main()
{
    double a,b,c,sm,ar,m,t;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
        m=0;
        if(a>m)m=a;
        if(b>m)m=b;
        if(c>m)m=c;
        if(a==0||b==0||c==0) printf("-1.000\n");
        else if(a+b+c-m<=m) printf("-1.000\n");
        else
            {
                sm=(a+b+c)/2;
                t=sm*(sm-a)*(sm-b)*(sm-c);
                a=(4*sqrt(t))/3;
                printf("%.3lf\n",a);
            }

}
return 0;
}

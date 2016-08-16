#include <stdio.h>
#include <math.h>

int main()
{
    double r1,r2,r3,a,b,c,an1,an2,an3,s,areat,area1,area2,area3,ans;
    int cs,i;
    scanf("%d",&cs);
    for(i=0;i<cs;i++){
      scanf("%lf %lf %lf",&r1,&r2,&r3);

      a= r2+r3;
      b= r1+r3;
      c= r1+r2;

      an1=acos((b*b+c*c-a*a)/(2*b*c));
      an2=acos((a*a+c*c-b*b)/(2*a*c));
      an3=acos((b*b+a*a-c*c)/(2*b*a));

      s=(a+b+c)/2.0;
      areat=sqrt(s*(s-a)*(s-b)*(s-c));

      area1=0.5*an1*r1*r1;
      area2=0.5*an2*r2*r2;
      area3=0.5*an3*r3*r3;

      ans=areat-area1-area2-area3;
      printf("%.6lf\n", ans);
    }
    return 0;
}

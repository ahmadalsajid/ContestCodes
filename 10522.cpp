#include<stdio.h>
#include<math.h>
int main()
{
    long int w,cn=0;
    scanf("%ld",&w);
    double a,b,c,area;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
        area=(a*a*b*b*c*c)/ sqrt((4*(a*a*a*a*b*b*c*c))-(((a*a*b*b)-(b*b*c*c)+(c*c*a*a))*((a*a*b*b)-(b*b*c*c)+(c*c*a*a))));
        if((int)area<0)
        {
            printf("These are invalid inputs!\n");
            cn++;
            if(cn==w) break;
        }
        else printf("%.3lf\n",area);

    }
    return 0;
}

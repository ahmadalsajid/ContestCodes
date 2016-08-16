#include<stdio.h>
#include<math.h>
int main()
{
    double i,j,k,l,n,s,u,v,a,t;
    for(i=1;;i++)
        {
            scanf("%lf",&n);
            if(!n) break;
            else
                {
                    scanf("%lf %lf %lf",&j,&k,&l);
                    if(n==1)
                        {
                            a=(k-j)/l;
                            s=(j*l)+(a*l*l)/2;
                            printf("Case %.0lf: %.3lf %.3lf\n",i,s,a);
                        }
                    else if(n==2)
                        {
                            t=(k-j)/l;
                            s=((j+k)/2)*t;
                            printf("Case %.0lf: %.3lf %.3lf\n",i,s,t);
                        }
                    else if(n==3)
                        {
                            v=sqrt((j*j)+(2*k*l));
                            t=(v-j)/k;
                            printf("Case %.0lf: %.3lf %.3lf\n",i,v,t);
                        }
                    else if(n==4)
                        {
                            u=sqrt((j*j)-(2*k*l));
                            t=(j-u)/k;
                            printf("Case %.0lf: %.3lf %.3lf\n",i,u,t);
                        }
                }
        }
        return 0;
}

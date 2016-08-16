#include<stdio.h>

int main()
{
int a,x,y,t;
while(scanf("%d",&a)&&a!=0)
    {
        for(x=1;x<=a;x++)
            {
                for(y=1;y<=a;y++)
                    {
                        t=(x*x*x)-(y*y*y);
                            if(t==a)
                                {
                                    break;
                                }
                    }
                            if(t==a)
                                {
                                    printf("%d %d\n",x,y);
                                        break;
                                }
            }
            if(t!=a)
                {
                    printf("No solution\n");
                }
        }
        return 0;
}

#include<stdio.h>
int main()
{
    int i,j,t,te;
    int a[100];
    while(scanf("%d",&t)&&t){
        for(i=0;i<t;i++)
            {
                scanf("%d",&a[i]);
            }
        for(i=1;i<t;i++)
            {
                for(j=0;j<t-1;j++)
                    {
                        if(a[j]>a[j+1])
                            {
                                te=a[j];
                                a[j]=a[j+1];
                                a[j+1]=te;
                            }
                    }
            }
        if((1422-a[t-1])200) {printf("IMPOSSIBLE\n");continue;}
        for(i=1;i<=t;i++)
            {
                if((a[i]-a[i-1])<201)
                 {
                     printf("IMPOSSIBLE\n");
                     break;
                }
            }
        if(i==t+1)printf("POSSIBLE\n");
    }
    return 0;
}

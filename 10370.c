#include<stdio.h>
int main()
{
    int c,s,tn,i,j,a[1000];
    float aavg,avg,p;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
        {
            tn=0;
            aavg=0.0;
            scanf("%d",&s);
            for(j=0;j<s;j++)
                {
                    scanf("%d",&a[j]);
                    tn+=a[j];
                }
           avg=tn/s;
            for(j=0;j<s;j++)
                {
                    if(a[j]>avg) aavg++;
                }
            p=(aavg*100.0/s);
            printf("%.3f%%\n",p);
        }
    return 0;
}

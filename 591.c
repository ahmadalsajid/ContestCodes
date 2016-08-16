#include<stdio.h>
int main()
    {
        int a[52],i,t,avg,n,c,s=1;
        while(scanf("%d",&n)&&n){
            t=0;c=0;
            for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                    t+=a[i];
                }
            avg=t/n;
            for(i=0;i<n;i++)
                {
                    if(a[i]>avg) c+=a[i]-avg;
                }
            printf("Set #%d",s);
                   printf("The minimum number of moves is %d.\n\n",c);
            s++;
        }
        return 0;
    }

#include<stdio.h>
int main()
{
    int a[20];
    int i,t,j,temp,T,n;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%d",&n);
            for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
            for(i=1;i<n;i++)
                {
                    for(j=0;j<n-1;j++)
                        {
                            if(a[j]>a[j+1])
                                {
                                    temp=a[j];
                                    a[j]=a[j+1];
                                    a[j+1]=temp;
                                }
                        }
                }
                printf("%d\n",(a[n-1]-a[0])*2);
        }
    return 0;
}

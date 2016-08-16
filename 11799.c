#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,T,n;
    int a[100];
    scanf("%d",&T);
    for(k=1;k<=T;k++)
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
                                    t=a[j];
                                    a[j]=a[j+1];
                                    a[j+1]=t;
                                }
                        }
                }
            printf("Case %d: %d\n",k,a[n-1]);
        }
    return 0;
}

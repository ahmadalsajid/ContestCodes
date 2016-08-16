#include<stdio.h>
int main()
    {
        int n,i,j,a[1000],c,t;
        while(scanf("%d",&n)==1){
            for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
                c=0;
            for(i=1;i<=n;i++)
                {
                    for(j=0;j<n-1;j++)
                        {
                            if(a[j]>a[j+1])
                                {
                                    t=a[j];
                                    a[j]=a[j+1];
                                    a[j+1]=t;
                                    c++;
                                }
                        }
                }
                printf("Minimum exchange operations : %d\n",c);
            }
        return 0;
    }

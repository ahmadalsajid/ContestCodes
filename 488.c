#include<stdio.h>
int main()
{
    int t,a,f,i,j,T,k;
    scanf("%d",&t);
    for(T=1;T<=t;T++)
        {
            scanf("%d %d",&a,&f);
            for(i=1;i<=f;i++)
                {
                    for(j=1;j<=a;j++)
                        {
                            for(k=1;k<=j;k++)
                                {
                                    printf("%d",j);
                                }
                                printf("\n");
                        }
                      for(j=a-1;j>=1;j--)
                        {
                            for(k=1;k<=j;k++)
                                {
                                    printf("%d",j);
                                }
                                printf("\n");
                        }
                        if(i<f)  printf("\n");
                    }
                    if(T<t)  printf("\n");
        }
    return 0;
}

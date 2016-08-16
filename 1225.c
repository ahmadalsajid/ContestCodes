#include<stdio.h>

int main()
{
    int n,i,j,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
            int a[10]={0};
            scanf("%d",&n);
            for(j=1;j<=n;j++)
                {
                    int tmp=j;
                    while(tmp){
                        a[tmp%10]++;
                        tmp/=10;
                    }
                }
            printf("%d",a[0]);
            for(j=1;j<10;j++) printf(" %d",a[j]);
            printf("\n");
        }

    return 0;
}

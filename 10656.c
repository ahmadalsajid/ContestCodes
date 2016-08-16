#include<stdio.h>
int main()
{
    int i,j,n,b,t,a[1010];
    while(scanf("%d",&n)&&n){
        b=0;
        j=0;
        for(i=0;i<n;i++)
            {
                scanf("%d",&t);
                if(t>0)
                    {
                        b=1;
                        a[j]=t;
                        j++;
                    }
            }
        for(i=0;i<j;i++)
            {
                printf("%d",a[i]);
                if(i<j-1) printf(" ");
            }
        if(b==0) printf("0");
        printf("\n");
    }
    return 0;
}

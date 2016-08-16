#include<stdio.h>
int main()
{
    long long int b,n,N,c,i,j,t,a[100];
    j=1;
    for(;;){
        scanf("%lld",&n);
        if(n==-1) break;
        else{
            c=0;
            for(t=1;t<=n;t++)
            {
                N=t;
            for(i=0;N>0;i++)
                {
                    a[i]=N%2;
                    N=N/2;
                }

            for(j=0;j<i-1;j++)
                {
                    if(a[j]==1&&a[j]==a[j+1]) c++;
                }
            }
                        printf("Case %lld: %lld\n",j,c);
        }
    }
    return 0;
}

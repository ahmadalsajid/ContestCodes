#include<stdio.h>
int main()
{
    long long int a[20],i,j,k,max,n,s,c=1;
    while(scanf("%lld",&n)!=EOF){
    for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
    max=0;
    for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
                {
                    s=1;
                    for(k=i;k<=j;k++)
                        {
                            s*=a[k];
                            if(s>max) max=s;
                        }
                }
        }
    printf("Case #%lld: The maximum product is %lld.\n\n",c,max);
    c++;
    }
    return 0;
}

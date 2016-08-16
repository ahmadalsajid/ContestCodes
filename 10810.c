#include<stdio.h>
long long int a[500000];
int main()
{
    long long int i,j,n,c,t;
    while(scanf("%lld",&n)&&n){
        c=0;
        for(i=0;i<n;i++) {scanf("%lld",&a[i]);}

        for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                    {
                        if(a[i]>a[j])
                            {
                                t=a[i];
                                a[i]=a[j];
                                a[j]=t;
                                c++;
                            }
                    }
            }
        printf("%lld\n",c);
    }
    return 0;
}

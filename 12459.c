#include<stdio.h>
int main()
{
    long long int a[81],i,n;
    for(i=0;i<81;i++)
        {
            if(i==0) a[i]=1;
            else if(i==1) a[i]=2;
            else a[i]=a[i-1]+a[i-2];
        }
    while(scanf("%lld",&n)&&n!=0){
        printf("%lld\n",a[n-1]);
    }

        return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    long long int a[1000];
    long long int n,i,j,k;
    while(scanf("%lld",&n)&&n>-1){
        if(n==0) printf("0\n");
        else{
        for(i=0;n;i++)
            {
                a[i]=n%3;
                n=n/3;
            }
        for(i=i-1;i>=0;i--)
            {
                printf("%lld",a[i]);
            }
        printf("\n");
        }
    }
    return 0;
}

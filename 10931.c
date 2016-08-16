#include<stdio.h>
int main()
{
    unsigned long long int n;
    int i,j,c,a[100];
    while(scanf("%llu",&n)==1&&n!=0){
        for(i=0;n>0;i++)
            {
                a[i]=n%2;
                n=n/2;
            }
        printf("The parity of ");
        c=0;
        for(j=i-1;j>=0;j--)
            {
                printf("%d",a[j]);
                if(a[j]==1) c++;
            }
        printf(" is %d (mod 2).\n",c);
        }
        return 0;
}

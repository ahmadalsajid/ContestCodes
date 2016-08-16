#include<stdio.h>
int main()
{
    long long int i,l,t,n,a,mi,j;
    j=1;
    while(scanf("%lld %lld",&a,&l)&&a>0&&l>0){
            mi=0;
            n=a;
                    for(i=1;a!=1;i++)
                        {
                            if(a%2==1)
                                {
                                    a=3*a+1;
                                    if(a>l) break;
                                }
                            else if(a%2==0)
                                {
                                    a=a/2;
                                    if(a>l) break;
                                }
                        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,n,l,i);
        j++;
        }
        return 0;
}

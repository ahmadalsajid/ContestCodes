#include<stdio.h>
#include<math.h>
unsigned long long int isprime(unsigned long long int a)
{
    unsigned long long int i,t,r,f=1;
    t=(pow(2,a)-1);
    if(!(t%2)) return 0;
    else
        {
            r=(int)sqrt(t);
            for(i=3;i<=r;i+=2)
                {
                    if(!(t%i))
                        {
                            return 0;
                            f=0;
                            break;
                        }
                }
            if(f==1) return 1;
        }
}
int main()
{
    int p[37];
    unsigned long long int i,j,n,res;
    for(i=0;i<37;i++)
        {
            p[i]=0;
        }
    for(i=2;i<=6;i++)
        {
            if(p[i]==0)
                {
                    for(j=i+i;j<37;j+=i)
                        {
                            p[j]=1;
                        }
                }
        }

    while(scanf("%llu",&n)&&n){
        if(p[n]==0)
            {
                if(isprime(n))
                    {
                        res=pow(2,n-1)*(pow(2,n)-1);
                        printf("Perfect: %llu!\n",res);
                    }
               else printf("Given number is prime. But, NO perfect number is available.\n");
            }
        else printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}

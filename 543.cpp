#include<stdio.h>
#include<math.h>
typedef long long int lls;
#define size 1000002
bool a[size];
int main()
{
    lls i,j,s,n;
    s=sqrt(size);
    for(i=4;i<size;i+=2) a[i] =true;
    for(i=3;i<=s;i++)
        {
            if(a[i]==0)
                {
                    for(j=i*i;j<size;j+=i) a[j]=true;
                }
        }
    while(scanf("%lld",&n)&&n){
        lls t=n/2;
        int flag=1;
    for(i=2;i<=t;i++)
        {
            if(a[i]==0)
                {
                    if(a[n-i]==0)
                        {
                            printf("%lld = %lld + %lld\n",n,i,n-i);
                            flag=0;
                            break;
                        }
                }
        }
        if(flag) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

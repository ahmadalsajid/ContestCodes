#include<stdio.h>
int main()
{
    long int i,n,sum;
    printf("PERFECTION OUTPUT\n");
    for(;;)
    {
        scanf("%ld",&n);
        if(!n){printf("END OF OUTPUT\n");break;}
        else {
        sum=0;
        for(i=1;i<=n/2;i++)
            {
                if(!(n%i)) sum+=i;
            }
        if(sum ==n) printf("%5ld PERFECT\n",n);
        else if(sum<n) printf("%5ld DEFICIENT\n",n);
        else printf("%5ld ABUNDANT\n",n);
       }
    }
    return 0;
}

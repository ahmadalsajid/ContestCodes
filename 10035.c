#include<stdio.h>
int main()
{
     long long int p,q,i,j,c,a,b,ra,rb;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a==0&&b==0) break;
        c=0;q=0;
        for(;;)
            {
                if(a==0&&b==0) break;
                p=((a%10)+(b%10)+q);
                a=a/10;
                b=b/10;
                if(p>=10)
                    {
                      c++;
                      q=1;
                    }
                else q=0;
            }

    if(c==0) printf("No carry operation.\n");
    else if(c==1) printf("%lld carry operation.\n",c);
    else printf("%lld carry operations.\n",c);
    }
    return 0;
}

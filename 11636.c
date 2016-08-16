#include<stdio.h>
int main()
{
    int i,c,p,n;
    for(i=1;i<=2000;i++)
        {
            p=1;
            c=0;
            scanf("%d",&n);
            if(n<0) break;
            else if(n==0) printf("Case %d: %d\n",i,c);
            else
                {
                    for(;p<n;)
                        {
                            p*=2;
                            c++;
                        }
                    printf("Case %d: %d\n",i,c);
                }
        }
    return 0;
}

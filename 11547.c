#include<stdio.h>
int main()
    {
        int tl,t,n,r,i,tn;
        scanf("%d",&tl);
        for(i=0;i<tl;i++)
            {
                scanf("%d",&n);
                t=((((((n*567)/9)+7492)*235)/47)-498);
                if(t<0) t*=-1;
                tn=(t/10)%10;

                printf("%d\n",tn);
            }
        return 0;
    }

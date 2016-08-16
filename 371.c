#include<stdio.h>
int main()
{
    long long int i,l,h,v,s,a,t,L,o,H;
    while(scanf("%lld %lld",&l,&h)){
        if(l==0&&h==0) break;
        if(l<=h){L=l;H=h;}
        else if(l>h) {L=h;H=l;}
        v=0;
        o=L;
        if(L==0) L++;
        for(t=L;t<=H;t++)
            {
                a=t;
                for(i=0;;i++)
                    {
                        if(!(a%2)) a=a/2;
                        else if(a%2) a=3*a+1;
                        if(a==1) break;
                    }
                    i++;
                    if(i>v){v=i;s=t;}
            }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",o,H,s,v);
    }
    return 0;
}

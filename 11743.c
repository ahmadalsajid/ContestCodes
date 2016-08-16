#include<stdio.h>
int sum(int s)
    {
        int rem,rs=0;
        for(;s!=0;)
            {
                rem=s%10;
                s=s/10;
                rs+=rem;
            }
        return rs;
    }
int odd(int n)
    {
        int i,res=0;
        for(i=0;n!=0;i++)
            {
                int rem=n%10;
                n=n/10;
                if(!(i%2))
                    {
                        res+=rem;
                    }
            }
        return res;
    }
int even(int m)
    {
         int i,t,res=0,te;
        for(i=0;m!=0;i++)
            {
                int rem=m%10;
                m=m/10;
                if((i%2))
                    {
                        te=rem*2;
                        t=sum(te);
                        res+=t;
                    }
            }
        return res;
    }

int main()
{
    int a,b,c,d,t,C,r;
    scanf("%d",&C);
    for(t=1;t<=C;t++)
            {
                scanf("%d %d %d %d",&a,&b,&c,&d);
                int oa=odd(a);
                int ob=odd(b);
                int oc=odd(c);
                int od=odd(d);

                int ea=even(a);
                int eb=even(b);
                int ec=even(c);
                int ed=even(d);

                r=oa+ob+oc+od+ea+eb+ec+ed;
            if(!(r%10)) printf("Valid\n");
            else printf("Invalid\n");
            }
    return 0;
}

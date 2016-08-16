#include<stdio.h>
#include<string.h>
#include<math.h>
long int number(char x[])
{
    long int i,n=0,p;
    for(i=strlen(x)-1,p=0;i>=0;i--,p++)
        {
           if(x[i]=='1')
            {
                 n+=pow(2,p);
            }
        }
    return n;
}

long int gcd(long int x, long int y)
{
    long int i;
    if(y<x)
        {
            i=x;
            x=y;
            y=i;
        }
     if(x) return gcd(y%x,x);
     else  return y;
}

int main()
{
    long int p,P,c,in1,in2;
    char a[35],b[35];
    scanf("%ld",&P);
    getchar();
    for(p=1;p<=P;p++)
        {
            gets(a);
            gets(b);

            in1=number(a);
            in2=number(b);
            c=gcd(in1,in2);
            if(c==1) printf("Pair #%ld: Love is not all you need!\n",p);
            else printf("Pair #%ld: All you need is love!\n",p);
        }
    return 0;
}

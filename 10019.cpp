#include<stdio.h>
#include<math.h>
int count(int n)
{
    int a[200],j,c=0;
    for(j=0;n!=0;j++)
        {
            a[j]=n%2;
            if(a[j]==1) c++;
            n/=2;
        }
        return c;
}
int main()
{
    int d,h,cd,ch,t,T,htd,i,r;
    scanf("%d",&T);
    for(t=0;t<T;t++)
        {
            scanf("%d",&d);
            h=d;
            cd=count(d);
            htd=0;
            for(i=0;h!=0;i++)
                {
                    r=h%10;
                    h=h/10;
                    htd+=((int)pow(16,i))*r;
                }
            ch=count(htd);
            printf("%d %d\n",cd,ch);
        }
    return 0;
}

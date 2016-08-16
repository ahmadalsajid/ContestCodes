#include<stdio.h>
#include<math.h>
int main()
{
    int c,l,u,i,r,sn;
    for(c=1;c<=201;c++)
        {
            scanf("%d %d",&l,&u);
             if(!l&&!u) break;
             else
             {
                 sn=0;
                for(i=l;i<=u;i++)
                    {
                        r=(int)sqrt(i);
                        if((r*r)==i) sn++;
                    }
                printf("%d\n",sn);
             }
        }
    return 0;
}

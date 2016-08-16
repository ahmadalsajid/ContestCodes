#include<stdio.h>
int main()
{
    int cd,cm,cy,bd,bm,by,a,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
        {
            scanf("%d/%d/%d",&cd,&cm,&cy);
        scanf("%d/%d/%d",&bd,&bm,&by);
        a=cy-by;
        if(cm<bm) a--;
        else if(cm==bm)
            {
                if(cd<bd)
                a--;
            }
        if(a>130) printf("Case #%d: Check birth date\n",i);
        else if(a<0) printf("Case #%d: Invalid birth date\n",i);
        else printf("Case #%d: %d\n",i,a);
        }

    return 0;
}


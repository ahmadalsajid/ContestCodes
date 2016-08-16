#include<stdio.h>
int main()
{
    int i,j,t,T,a[10],as,ds;
    printf("Lumberjacks:\n");
    scanf("%d",&T);
    for(t=0;t<T;t++)
        {
            for(i=0;i<10;i++)
                {
                    scanf("%d",&a[i]);
                }
                as=0;
            for(i=0;i<10;i++)
                {
                    for(j=i+1;j<10;j++)
                        {
                            if(!(a[i]<=a[j])) as=1;
                        }
                }
            ds=0;

            for(i=0;i<10;i++)
                {
                    for(j=i+1;j<10;j++)
                        {
                            if(!(a[i]>=a[j])) ds=1;
                        }
                }
            if((!as&&ds)||(as&&!ds)) printf("Ordered\n");
            else printf("Unordered\n");
        }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
            scanf("%d %d",&a,&b);
            printf("%d\n",(a/3)*(b/3));
        }
    return 0;
}

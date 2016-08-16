#include<stdio.h>
#include<string.h>
int main()
{
    struct st{
        char ch[105];
        int r;
    }a[10],t;
    int i,j,c,C,s,m;
    scanf("%d",&C);
    getchar();
    for(c=01;c<=C;c++)
        {
            for(s=0;s<10;s++)
                {
                    scanf("%s %d",a[s].ch,&a[s].r);
                }

            for(i=0;i<10;i++)
                {
                    for(j=i+1;j<10;j++)
                        {
                            if(a[i].r<a[j].r)
                                {
                                    t=a[i];
                                    a[i]=a[j];
                                    a[j]=t;
                                }
                        }
                }

            printf("Case #%d:\n",c);
            m=a[0].r;
            for(i=0;i<10;i++)
                {
                    if(a[i].r==m)
                        {
                            puts(a[i].ch);
                        }
                }

        }

    return 0;
}

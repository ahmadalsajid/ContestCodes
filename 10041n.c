#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,t,T,r,s[100000],avg,count;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
        {
            scanf("%d",&r);
            for(i=0;i<r;i++)
                {
                    scanf("%d",&s[i]);
                }
            for(i=0;i<r;i++)
                {
                    for(j=i+1;j<r;j++)
                        {
                            if(s[i]>s[j])
                                {
                                    t=s[i];
                                    s[i]=s[j];
                                    s[j]=t;
                                }
                        }
                }
                count=0;
                for(i=0;i<r/2;i++)
                    {
                        avg=s[i];
                    }
                if((r%2)==1)avg=s[i];
                for(i=0;i<r;i++)
                    {
                        t=abs(avg-s[i]);
                        count+=t;
                    }
                printf("%d\n",count);
        }
    return 0;
}


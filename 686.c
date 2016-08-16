#include<stdio.h>
#include<math.h>
int main()
{
    int a[33000],s,i,j;
    int n,c;
    for(i=0;i<33000;i++) a[i]=0;
    a[1]=1;
    s=sqrt(33000);
    for(i=2;i<=s;i++)
        {
            if(a[i]==0)
            {
                for(j=i+i;j<33000;j+=i)
                {
                    a[j]=1;
                }
            }
        }
    while(scanf("%d",&n)&&n){
        c=0;
        if(n==4)
        {
            printf("1\n");
            continue;
        }

        for(i=3;i<=n/2;i+=2)
            {
                if(a[i]==0)
                    {
                        if(a[n-i]==0) c++;
                    }
            }
        printf("%d\n",c);
    }
    return 0;
}

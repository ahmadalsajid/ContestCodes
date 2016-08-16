#include<stdio.h>
#include<algorithm>
#include<stdlib.h>


using namespace std;
int main()
{
    int a[100000],i,j,t,sum=0,n,res,r,k,g;
    scanf("%d",&r);
    for(k=1;k<=r;k++)
    {
        res=0,sum=0;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+t);
    for(i=0;i<t/2;i++)
    {
        res=a[i];

    }
      if(t%2==1)res=a[i];

    sum=0;
    for(i=0;i<t;i++)
    {
        g=abs(res-a[i]);
        sum=sum+g;
    }
    printf("%d\n",sum);
    }
    return 0;
}


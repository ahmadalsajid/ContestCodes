#include<stdio.h>
int main()
{
    long long int arr[3],t,T,i,a,b,c,j,tm;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
        {
            for(i=0;i<3;i++) scanf("%lld",&arr[i]);
            for(i=0;i<3;i++)
                {
                    for(j=i;j<3;j++)
                        {
                            if(arr[i]>arr[j])
                                {
                                    tm=arr[i];
                                    arr[i]=arr[j];
                                    arr[j]=tm;
                                }
                        }
                }
             printf("Case %lld: %lld\n",t,arr[1]);
        }
    return 0;
}

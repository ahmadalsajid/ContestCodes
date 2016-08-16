#include<stdio.h>
#include<algorithm>
using namespace std;
int a[10000000];
int main()
{
    long long int i,n;
    while(scanf("%lld",&n)&&n){

        for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
        sort(a,a+n);
        printf("%d",a[0]);
        for(i=1;i<n;i++)
            {
                printf(" %d",a[i]);
            }
        printf("\n");
    }
  return 0;
}

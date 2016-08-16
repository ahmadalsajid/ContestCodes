#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,c,s;
    while(scanf("%lld",&n)&&n){
        c=(int)sqrt(n);
        s=c*c;
        if(n==s) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[50];
    long long int i,r,n,l;
    while(gets(a)){
    l=strlen(a);
    r=0;
    if(l==1&&a[0]=='0') break;
    for(i=0;a[i];i++)
        {
            n=a[i]-48;
            r+=(n*(pow(2,l)-1));
            l--;
        }
        printf("%lld\n",r);
    }
    return 0;
}

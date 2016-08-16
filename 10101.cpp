#include<stdio.h>

int main()
{
    unsigned long long int c=0,n;
    while(scanf("%llu",&n)==1){
    printf("%4lld.",++c);
    int flag =1;
    if(!n){printf(" %llu\n",n);continue;}
    unsigned long long int fk=n/100000000000000;
    if(fk) {printf(" %llu kuti",fk); flag=0;}
    unsigned long long int n1=n%100000000000000;

    unsigned long long int fl=n1/1000000000000;
    if(fl){ printf(" %llu lakh",fl); flag=0;}
    unsigned long long int n2=n1%1000000000000;

    unsigned long long int fh=n2/10000000000;
    if(fh){ printf(" %llu hajar",fh); flag=0;}
    unsigned long long int n3=n2%10000000000;

    unsigned long long int fs=n3/1000000000;
    if(fs){ printf(" %llu shata",fs); flag=0;}
    unsigned long long int n4=n3%1000000000;

    unsigned long long int sk=n4/10000000;
    if(sk){ printf(" %llu kuti",sk); flag=0;}
    if(flag==0&&sk==0) printf(" kuti");
    unsigned long long int n5=n4%10000000;

    unsigned long long int sl=n5/100000;
    if(sl) printf(" %llu lakh",sl);
    unsigned long long int n6=n5%100000;

    unsigned long long int sh=n6/1000;
    if(sh) printf(" %llu hajar",sh);
    unsigned long long int n7=n6%1000;

    unsigned long long int ss=n7/100;
    if(ss) printf(" %llu shata",ss);
    unsigned long long int n8=n7%100;

    if(n8) printf(" %llu",n8);
    printf("\n");
    }
    return 0;
}

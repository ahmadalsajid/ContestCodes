#include<stdio.h>
#include<string.h>
int test(char ar[],long int len,long int d)
    {
        long int i,num=0;
        for(i=0;i<len;i++)
            {
                num=(num*10+ar[i]-'0');
                num%=d;
            }
        if(num==0) return 0;
        else return 1;
    }
int main()
{
    char a[100000];
    long int flag1=0,flag2,x,ly,l,l100,l400,h,b;
    while(gets(a)!=NULL){
    x=strlen(a);
    if(flag1) printf("\n");
    flag1=1;
    flag2=0;
    ly=0;
    l=test(a,x,4);
    l100=test(a,x,100);
    l400=test(a,x,400);
    if((!l&&l100)||!l400)
        {
            printf("This is leap year.\n");
            flag2=1;
            ly=1;
        }
    h=test(a,x,15);
    if(!h)
        {
            printf("This is huluculu festival year.\n");
            flag2=1;
        }
    b=test(a,x,55);
    if(!b&&ly)printf("This is bulukulu festival year.\n");
    if(!flag2) printf("This is an ordinary year.\n");
    }
    return 0;
}

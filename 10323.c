#include<stdio.h>
long long int fact(long long int n)
{
if(n==0)
return 1;
else
return (n*fact(n-1));
}
int main()
{
long long int a;
while(scanf("%lld",&a)!=EOF)
{
if(a<0&&(a%2)) //if(a<0&&(a%2)==-1)
printf("Overflow!\n");
else if(a<0&&(a%2)) //else if(a<0&&(a%2)==0)
printf("Underflow!\n");
else if(a==0||a<=7)
printf("Underflow!\n");
else if(a>13)
printf("Overflow!\n");
else
{
long long int i=fact(a);
printf("%lld\n",i);
}
}
return 0;
}


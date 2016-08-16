#include<stdio.h>
int main()
{
  long long int a,b,c,d,l,r,i,f;
  while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l)==5){
    if(!a&&!b&&!c&&!d&&!l) break;
        r=0;
      for(i=0;i<=l;i++)
        {
            f=(a*i*i)+(b*i)+c;
            if(!(f%d)) r++;
        }
      printf("%lld\n",r);
  }
    return 0;
}

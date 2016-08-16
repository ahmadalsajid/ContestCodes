#include<stdio.h>
int main()
{
    int a,b,c;

   for(;;)
   {
       scanf("%d %d %d",&a,&b,&c);
       int r=0;
       if(a==0&&b==0&&c==0) break;
        else if(((a*a)==(b*b)+(c*c))) r=1;
        else if(((b*b)==(a*a)+(c*c))) r=1;
        else if(((c*c)==(a*a)+(b*b))) r=1;
        if(r==1) printf("right\n");
        else  printf("wrong\n");
   }
    return 0;
}

#include <stdio.h>
#include <conio.h>

int main()

{
          freopen("D:\\input.txt","r",stdin);
          freopen("D:\\output.txt","w",stdout);

          int a,b,min,max,i,c;
          while(scanf("%d %d", &a, &b)!=EOF)
          {
                    if(a>b)
                    {
                              min=a;
                    }
                    else
                    {
                              max=b;
                    }
                    for(i=1;i<=min;i++)
                    {
                              if(a%i==0 && b%i==0)
                              {
                                        c=i;
                              }
                    }
                    printf("The GCD of %d and %d is %d\n\n", a,b,c);
          }
          getch ();
          return 0;
}

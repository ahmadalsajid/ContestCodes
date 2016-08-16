#include<stdio.h>

int main()
{
    unsigned long int a,b,c;
    int i,j;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%lu%lu%lu",&a,&b,&c);
        if(a+b>c&&b+c>a&&a+c>b)
        {
            if(((a==b)&&a!=c&&b!=c)||((b==c)&&b!=a&&c!=a)||((a==c)&&a!=b&&c!=b))
            {
                printf("Case %d: Isosceles\n",j);
            }
            else if(a==b&&b==c&&a==c)
            {
                printf("Case %d: Equilateral\n",j);
            }
           else if(a!=b&&b!=c&&a!=c)
            {
                printf("Case %d: Scalene\n",j);
            }
        }
        else
        {
             printf("Case %d: Invalid\n",j);
        }
    }
    return 0;
}

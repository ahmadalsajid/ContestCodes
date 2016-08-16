#include<stdio.h>
int main()
{
    long int n,in,k,o;
    while(scanf("%ld",&in)!=EOF)
    {
        n=k=o=1;
        while(k)
        {
            if(n<in)
            {
                n=(n*10)+1;
                o++;
            }
            k=n%in;
            n=k;
        }
        printf("%ld\n",o);
    }
    return 0;
}

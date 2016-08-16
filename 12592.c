#include<stdio.h>
#include<string.h>
int main()
{
    struct st
    {
        char inp[105];
        char outp[105];
    }a[21];
    char s[105];
    int c,C,t,T,i;
    scanf("%d",&C);
    getchar();
    for(c=0;c<C;c++)
        {
            gets(a[c].inp);
            gets(a[c].outp);
        }
    scanf("%d",&T);
    getchar();
    for(t=0;t<T;t++)
        {
            gets(s);
            for(c=0;c<C;c++)
                {
                    if(!strcmp(s,a[c].inp))
                        {
                            puts(a[c].outp);
                        }
                }
        }

    return 0;
}

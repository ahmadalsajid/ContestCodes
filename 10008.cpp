#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    struct st{
        char ch;
        long int c;
    }a[26],t;
    long int i,j,ln,n;
    char l;
    char in[1500];
    for(i=0;i<26;i++)
        {
            a[i].ch='A'+i;

            a[i].c=0;
        }
    scanf("%ld",&ln);
    getchar();

    for(i=0;i<ln;i++)
        {
            gets(in);
                for(j=0;in[j];j++)
                    {
                        if(isalpha(in[j]))
                            {
                                l=toupper(in[j]);
                                for(n=0;n<26;n++)
                                    {
                                        if(a[n].ch==l) {a[n].c++;break;}
                                    }
                            }
                    }
        }

    for(i=0;i<26;i++)
        {
            for(j=i+1;j<26;j++)
                {
                    if(a[i].c<a[j].c)
                        {
                            t=a[i];
                            a[i]=a[j];
                            a[j]=t;
                        }
                }
        }

    for(i=0;i<26;i++)
        {
            for(j=i+1;j<26;j++)
                {
                    if((a[i].ch>a[j].ch)&&(a[i].c==a[j].c))
                        {
                            t=a[i];
                            a[i]=a[j];
                            a[j]=t;
                        }
                }
        }


    for(i=0;i<26;i++)
        {
            if(a[i].c) printf("%c %ld\n",a[i].ch,a[i].c);
        }
    return 0;
}

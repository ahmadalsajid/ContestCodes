#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,T,i,j,n,s,k;
    char a[10005];
    char b[10005];
    scanf("%d",&T);
    getchar();
    for(t=0;t<T;t++)
        {
           gets(a);
           s=strlen(a);
           n=(int)sqrt(s);
           if((n*n)!=s)
            {
                printf("INVALID\n");
            }
           else if(n*n==s)
           {
               k=0;
               for(i=0;i<n;i++)
                {
                    for(j=i;j<s;j+=n)
                    {
                        b[k]=a[j];
                        k++;
                    }
                }
                b[s]=NULL;
            puts(b);
           }
        }
    return 0;
}

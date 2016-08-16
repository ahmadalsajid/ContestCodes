#include<stdio.h>
#include<string.h>
int main()
{
    char a[22],b[22];
    int t,T,i,l1,l2;
    scanf("%d",&T);
    getchar();
    for(t=0;t<T;t++)
    {
        gets(a);
        gets(b);
        l1=strlen(a);
        l2=strlen(b);
        if(l1!=l2)
            {
                 printf("No\n");
                 continue;
            }
        for(i=0;i<l1;i++)
            {
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                    {
                        if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u')
                        {
                            printf("No\n");
                            break;
                        }
                    }
                else if(a[i]!=b[i])
                    {
                        printf("No\n");
                        break;
                    }
            }
        if(i==l1) printf("Yes\n");
    }
    return 0;
}

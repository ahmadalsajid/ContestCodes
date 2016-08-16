#include<stdio.h>
#include<string.h>
int main()
{
    char a[1005];
    int i,r,m,l;
    while(gets(a))
{
l = strlen(a);
if(l==1 && a[0]=='0')break;
   else
    {
        r=0,m=0;

    for(i=0; a[i]!=NULL; i++)
    {
        r=a[i]-48;
        m=(m*10+r)%17;

    }

    if(m==0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    }
}
    return 0;
}


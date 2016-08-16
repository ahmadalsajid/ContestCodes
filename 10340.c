/*#include<stdio.h>
#include<string.h>
    char a[10000000];
    char b[10000000];
    char c[10000000];
int main()
{

    long int i,j,k;
    while(scanf("%s %s",&a,&b)==2){
        if(!(strcmp(a,b)))
            {
                printf("Yes\n");
                continue;
            }
            j=0;
            k=0;
        for(i=0;a[i];i++)
            {
                for(j;b[j];)
                    {
                        j++;
                        if(a[i]==b[j])
                            {
                                c[k]=b[j];
                                k++;
                                break;
                            }
                    }
            }
            c[k]=NULL;
        if(!strcmp(a,c)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}*/
//nahid
#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k=0,n=0,c=0,l;
    char a[100000],b[100000];
    while(scanf("%s%s",a,b)==2)
    {
        k=0,n=0,c=0;

     l=strlen(a);
    for(i=0;a[i]!=NULL;i++)
    {
        n=k;
        for(j=n;b[j]!=NULL;j++)
        {
            k=k+1;
            if(a[i]==b[j])
            {
                c=c+1;
                break;
            }
        }

    }

    if(l==c)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    }
    return 0;
}

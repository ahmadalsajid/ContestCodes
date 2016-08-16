#include<stdio.h>
#include<string.h>
int main()
{
    char t,a[105];
    int n,i,j,k,l,lm;
    while(scanf("%d %s",&n,&a)){
        if(n==0) break;
        l=strlen(a)/n;

        for(i=0;a[i];i+=l)
            {
                j=i;k=i+l-1;
                while(j<k){
                            t=a[j];
                            a[j]=a[k];
                            a[k]=t;
                            j++;k--;
                }
            }
            for(i=0;a[i];i++)
                {
                    printf("%c",a[i]);
                }
                printf("\n");
    }
    return 0;
}

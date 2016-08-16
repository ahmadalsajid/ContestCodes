#include<stdio.h>
#include<string.h>
int main()
{
    char out[210];
    char tmp[210];
    char c;
    int i,n,t,T;
    scanf("%d",&T);
    getchar();
    for(t=1;t<=T;t++)
        {
            while(scanf("%c",&c)&&c!='\r'){
                scanf("%d",&n);
                for(i=0;i<n;i++)
                    {
                        tmp[i]=c;
                    }
                strcat(out,tmp);
            }
            printf("%s\n",out);
        }
    return 0;
}

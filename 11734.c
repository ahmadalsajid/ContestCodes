#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ct[22];
    char te[22];
    char jd[22];
    int i,t,T,j;
    scanf("%d",&T);
    getchar();
    for(t=1;t<=T;t++)
        {
            gets(ct);
            gets(jd);
            if(!strcmp(ct,jd)) printf("Case %d: Yes\n",t);
            else
                {
                    j=0;
                    for(i=0;ct[i];i++)
                        {
                            if(isalpha(ct[i])) {te[j]=ct[i]; j++;}
                        }
                    te[j]=NULL;
                    if(!strcmp(te,jd)) printf("Case %d: Output Format Error\n",t);
                    else printf("Case %d: Wrong Answer\n",t);
                }
        }
    return 0;
}

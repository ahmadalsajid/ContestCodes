#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char ch[10000],re[10000];
    while(gets(ch)!=NULL){
        j=0;
        l=strlen(ch);
    for(i=0;i<l;i++)
        {
            if(ch[i]!=' '&&i<l-1)  //ch[i]!=NULL
                {
                    re[j]=ch[i];
                    j++;
                }
                else if(i==l-1){
                    printf("%c",ch[i]);
                     for(j=j-1;j>=0;j--)
                        {
                            printf("%c",re[j]);
                        }
                }
            else
                {
                    for(j=j-1;j>=0;j--)
                        {
                            printf("%c",re[j]);
                        }
                        printf("%c",ch[i]);
                        j=0;
                }
        }
        printf("\n");
    }
    return 0;
}

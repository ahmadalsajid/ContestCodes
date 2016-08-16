#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000000];
    char op[1000000];
    unsigned long long int i,l;
    while(gets(ch)!=NULL){
            l=strlen(ch);
            for(i=0;i<l;i++)
                {
                    op[i]=(ch[i]-7);
                }
                op[i]=NULL;
            puts(op);
        }
    return 0;

}

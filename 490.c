#include<stdio.h>
#include<string.h>
int main()
{
    int l=0,ln,max=0,i,j;
    char ch[105][105];
    while(gets(ch[l])!=NULL){
        ln=strlen(ch[l]);
        if(ln>max) max=ln;
        l++;
    }

    for(i=0;i<l;i++)
    {
        ln=strlen((ch[i]));
        if(ln<max)
        {
            while(ln<max){
                ch[i][ln]=' ';
                ln++;
            }
            ch[i][ln]='\0';
        }
    }

    for(i=0;i<max;i++)
    {
        for(j=l-1;j>=0;j--)
        {
            printf("%c",ch[j][i]);
        }
        printf("\n");
    }
    return 0;
}

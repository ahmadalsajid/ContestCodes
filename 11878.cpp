#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int a,b,c=0,n;
    char ch,r[4];
    while(scanf("%d%c%d=%s",&a,&ch,&b,r)==4){
        n=atoi(r);
        if(ch=='+')
            {
                if(a+b==n) c++;
            }
        else if(ch=='-')
            {
                if(a-b==n) c++;
            }
    }
    printf("%d\n",c);
    return 0;
}

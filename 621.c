#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int l,t,T;
    scanf("%d",&T);
    getchar();
    for(t=0;t<T;t++)
        {
            gets(a);
            l=strlen(a);            if((!strcmp(a,"1"))||(!strcmp(a,"4"))||(!strcmp(a,"78"))) printf("+\n");            else if((l>=2)&&(a[l-2]=='3'&&a[l-1]=='5')) printf("-\n");            else if((l>=2)&&(a[0]=='9'&&a[l-1]=='4')) printf("*\n");
            else if((l>=2)&&(a[0]=='1'&&a[1]=='9'&&a[2]=='0')) printf("?\n");
        }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int t,T;
    char a[7];
    scanf("%d",&T);
    getchar();
    for(t=0;t<T;t++)
        {
            gets(a);
            if(strlen(a)==5) printf("3\n");
            else if((a[0]=='o'&&a[1]=='n')||(a[1]=='n'&&a[2]=='e')||(a[0]=='o'&&a[2]=='e')) printf("1\n");
            else printf("2\n");
        }
    return 0;
}

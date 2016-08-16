#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char a[n][2][102];
    char s[102];

    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
        {
            for(j=0;j<2;j++)
                {
                    gets(a[i][j]);
                }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<2;j++)
                {
                    puts(a[i][j]);
                }
        }
    return 0;
}

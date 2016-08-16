#include<stdio.h>
#include <ctype.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,c;
    while(gets(a)!=NULL){
        c=0;
    for(i=0;a[i];i++)
        {
            if(isalpha(a[i]))
            {
                if(!isalpha(a[i+1]))
                {
                    c++;
                }
            }
        }
    printf("%d\n",c);
    }
    return 0;
}

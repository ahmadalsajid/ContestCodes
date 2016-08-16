#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[500];
    char b[500];
    char c[500];
    int i,j;
    while(gets(a)){
        if(!(strcmp("DONE",a))) break;
        else
            {
                j=0;
                for(i=0;a[i];i++)
                    {
                        if(isalpha(a[i]))
                            {
                                b[j]=tolower(a[i]);
                                j++;
                            }
                    }
                    b[j]=NULL;
                for(j=j-1,i=0;j>=0;j--,i++)
                    {
                        c[i]=b[j];
                    }
                    c[i]=NULL;
               if(!strcmp(b,c)) printf("You won't be eaten!\n");
               else printf("Uh oh..\n");
            }
    }
    return 0;
}

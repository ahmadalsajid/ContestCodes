#include<stdio.h>
#include<string.h>
int main()
{
    char a[6][2][20]={
       "HELLO","ENGLISH",
       "HOLA","SPANISH",
       "HALLO","GERMAN",
       "BONJOUR","FRENCH",
       "CIAO","ITALIAN",
       "ZDRAVSTVUJTE","RUSSIAN",
    };
    char l[20];
    int c=1,i;
    while(gets(l)){
        i=0;
        if(!strcmp(l,"#")) break;
        while(1){
            if(i==6)
                {
                    printf("Case %d: UNKNOWN\n",c);
                    break;
                }
            if(!strcmp(l,a[i][0]))
                {
                    printf("Case %d: %s\n",c,a[i][1]);
                    break;
                }
                i++;
        }
        c++;
    }
    return 0;
}

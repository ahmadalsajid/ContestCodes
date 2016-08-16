#include<stdio.h>
int main()
{
    char ch;
    long long int i,c=0;
    while(scanf("%c",&ch)!=EOF){
     if(ch=='"')
        {
            c++;
            if(c%2) printf("``");
            else printf("''");
        }
    else printf("%c",ch);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[500];
    while(gets(a)!=NULL){
          for(i=0;i<strlen(a);i++)
            {
                if(a[i]=='=') a[i]='0';
                else if(a[i]=='-') a[i]='9';
                else if(a[i]=='0') a[i]='8';
                else if(a[i]=='9') a[i]='7';
                else if(a[i]=='8') a[i]='6';
                else if(a[i]=='7') a[i]='5';
                else if(a[i]=='6') a[i]='4';
                else if(a[i]=='5') a[i]='3';
                else if(a[i]=='4') a[i]='2';
                else if(a[i]=='3') a[i]='1';
                else if(a[i]=='2') a[i]='`';
                else if(a[i]=='\\') a[i]='[';
                else if(a[i]==']') a[i]='p';
                else if(a[i]=='[') a[i]='o';
                else if(a[i]=='P'||a[i]=='p') a[i]='i';
                else if(a[i]=='O'||a[i]=='o') a[i]='u';
                else if(a[i]=='I'||a[i]=='i') a[i]='y';
                else if(a[i]=='U'||a[i]=='u') a[i]='t';
                else if(a[i]=='Y'||a[i]=='y') a[i]='r';
                else if(a[i]=='T'||a[i]=='t') a[i]='e';
                else if(a[i]=='R'||a[i]=='r') a[i]='w';
                else if(a[i]=='E'||a[i]=='e') a[i]='q';
                else if(a[i]=='\'') a[i]='l';
                else if(a[i]==';') a[i]='k';
                else if(a[i]=='L'||a[i]=='l') a[i]='j';
                else if(a[i]=='K'||a[i]=='k') a[i]='h';
                else if(a[i]=='J'||a[i]=='j') a[i]='g';
                else if(a[i]=='H'||a[i]=='h') a[i]='f';
                else if(a[i]=='G'||a[i]=='g') a[i]='d';
                else if(a[i]=='F'||a[i]=='f') a[i]='s';
                else if(a[i]=='D'||a[i]=='d') a[i]='a';
                else if(a[i]=='/') a[i]=',';
                else if(a[i]=='.') a[i]='m';
                else if(a[i]==',') a[i]='n';
                else if(a[i]=='M'||a[i]=='m') a[i]='b';
                else if(a[i]=='N'||a[i]=='n') a[i]='v';
                else if(a[i]=='B'||a[i]=='b') a[i]='c';
                else if(a[i]=='V'||a[i]=='v') a[i]='x';
                else if(a[i]=='C'||a[i]=='c') a[i]='z';

            }
        printf("%s\n",a);
          }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char a[26];
    char b[26];
    float ratio;
    int i,n_1,n_2,na1,na2,na3,nb1,nb2,nb3,r;
    while(gets(a)!=NULL){
        gets(b);
        n_1=0;
        n_2=0;
        for(i=0;i<strlen(a);i++)
            {
                if(a[i]=='a'||a[i]=='A') n_1+=1;
                else if(a[i]=='b'||a[i]=='B') n_1+=2;
                else if(a[i]=='c'||a[i]=='C') n_1+=3;
                else if(a[i]=='d'||a[i]=='D') n_1+=4;
                else if(a[i]=='e'||a[i]=='E') n_1+=5;
                else if(a[i]=='f'||a[i]=='F') n_1+=6;
                else if(a[i]=='g'||a[i]=='G') n_1+=7;
                else if(a[i]=='h'||a[i]=='H') n_1+=8;
                else if(a[i]=='i'||a[i]=='I') n_1+=9;
                else if(a[i]=='j'||a[i]=='J') n_1+=10;
                else if(a[i]=='k'||a[i]=='K') n_1+=11;
                else if(a[i]=='l'||a[i]=='L') n_1+=12;
                else if(a[i]=='m'||a[i]=='M') n_1+=13;
                else if(a[i]=='n'||a[i]=='N') n_1+=14;
                else if(a[i]=='o'||a[i]=='O') n_1+=15;
                else if(a[i]=='p'||a[i]=='P') n_1+=16;
                else if(a[i]=='q'||a[i]=='Q') n_1+=17;
                else if(a[i]=='r'||a[i]=='R') n_1+=18;
                else if(a[i]=='s'||a[i]=='S') n_1+=19;
                else if(a[i]=='t'||a[i]=='T') n_1+=20;
                else if(a[i]=='u'||a[i]=='U') n_1+=21;
                else if(a[i]=='v'||a[i]=='V') n_1+=22;
                else if(a[i]=='w'||a[i]=='W') n_1+=23;
                else if(a[i]=='x'||a[i]=='X') n_1+=24;
                else if(a[i]=='y'||a[i]=='Y') n_1+=25;
                else if(a[i]=='z'||a[i]=='Z') n_1+=26;
            }
        for(i=0;i<strlen(b);i++)
            {
                if(b[i]=='a'||b[i]=='A') n_2+=1;
                else if(b[i]=='b'||b[i]=='B') n_2+=2;
                else if(b[i]=='c'||b[i]=='C') n_2+=3;
                else if(b[i]=='d'||b[i]=='D') n_2+=4;
                else if(b[i]=='e'||b[i]=='E') n_2+=5;
                else if(b[i]=='f'||b[i]=='F') n_2+=6;
                else if(b[i]=='g'||b[i]=='G') n_2+=7;
                else if(b[i]=='h'||b[i]=='H') n_2+=8;
                else if(b[i]=='i'||b[i]=='I') n_2+=9;
                else if(b[i]=='j'||b[i]=='J') n_2+=10;
                else if(b[i]=='k'||b[i]=='K') n_2+=11;
                else if(b[i]=='l'||b[i]=='L') n_2+=12;
                else if(b[i]=='m'||b[i]=='M') n_2+=13;
                else if(b[i]=='n'||b[i]=='N') n_2+=14;
                else if(b[i]=='o'||b[i]=='O') n_2+=15;
                else if(b[i]=='p'||b[i]=='P') n_2+=16;
                else if(b[i]=='q'||b[i]=='Q') n_2+=17;
                else if(b[i]=='r'||b[i]=='R') n_2+=18;
                else if(b[i]=='s'||b[i]=='S') n_2+=19;
                else if(b[i]=='t'||b[i]=='T') n_2+=20;
                else if(b[i]=='u'||b[i]=='U') n_2+=21;
                else if(b[i]=='v'||b[i]=='V') n_2+=22;
                else if(b[i]=='w'||b[i]=='W') n_2+=23;
                else if(b[i]=='x'||b[i]=='X') n_2+=24;
                else if(b[i]=='y'||b[i]=='Y') n_2+=25;
                else if(b[i]=='z'||b[i]=='Z') n_2+=26;
            }
        na1=0;
        for(;n_1>0;)
            {
                r=n_1%10;
                n_1=n_1/10;
                na1+=r;
            }
        na2=0;
        for(;na1>0;)
            {
                r=na1%10;
                na1=na1/10;
                na2+=r;
            }
        na3=0;
        for(;na2>0;)
            {
                r=na2%10;
                na2=na2/10;
                na3+=r;
            }
        nb1=0;
        for(;n_2>0;)
            {
                r=n_2%10;
                n_2=n_2/10;
                nb1+=r;
            }
        nb2=0;
        for(;nb1>0;)
            {
                r=nb1%10;
                nb1=nb1/10;
                nb2+=r;
            }
        nb3=0;
        for(;nb2>0;)
            {
                r=nb2%10;
                nb2=nb2/10;
                nb3+=r;
            }
        if(nb3<=na3) ratio=(float)nb3/na3;
        else ratio=(float)na3/nb3;
        printf("%.2f %%\n",ratio*100.0);
    }
    return 0;
}

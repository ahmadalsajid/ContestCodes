#include<stdio.h>
int main()
{
    int s,i,j,f,b,st,en,t;
    while(scanf("%d %d",&st,&en)==2){
        if(st==-1&&en==-1) break;
        if(st==en) {printf("0\n");continue;}
        f=0;b=0;
        s=st;
        t=en;
        for(i=s+1;;i++)
            {
                s++;
                f++;
                if(s>99) s=0;

                if(s==t) break;
            }
            s=st;
        t=en;
        for(i=s-1;;i++)
            {
                s--;
                if(s<0) s=99;
                b++;
                if(s==t) break;
            }
        if(f>=b) printf("%d\n",b);
        else  printf("%d\n",f);
    }
    return 0;
}

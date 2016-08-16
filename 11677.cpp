#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
        if(!a&&!b&&!c&&!d) break;
            i=(a*60)+b;
            j=(c*60)+d;
            if(j<i) j+=1440;

        printf("%d\n",j-i);
    }
    return 0;
}


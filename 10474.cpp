#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int na[100000],qa[100000];
    long int n,q,i,j,s,nf,c=1;
    while(scanf("%ld %ld",&n,&q)==2){
        if(!n&&!q) break;
        for(i=0;i<n;i++)
            {
                scanf("%d",&na[i]);
            }
            sort(na,na+n);
        for(i=0;i<q;i++)
            {
                scanf("%d",&qa[i]);
            }
        printf("CASE# %ld:\n",c);
        c++;

        for(i=0;i<q;i++)
            {
                nf=0;
                s=qa[i];
                for(j=0;j<n;j++)
                    {
                        if(s==na[j])
                            {
                                 printf("%ld found at %ld\n",s,j+1);
                                    nf=1;
                                    break;
                            }
                    }
                if(nf==0) printf("%ld not found\n",s);
            }
    }
    return 0;
}

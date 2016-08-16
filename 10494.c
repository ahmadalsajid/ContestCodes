#include<stdio.h>
#include<string.h>
int main()
{
    char a[20000];
    char result[20000];
    char c;
    long long int i,n,r,d,num,res,rd;
    while(scanf("%s %c %lld",&a,&c,&n)!=EOF){
        r=0;rd=0;num=0;
        if(c=='/')
            {
                for(i=0;a[i];i++)
                    {
                        num=(r*10+(a[i]-48));
                        result[i]=(num/n)+48;
                        r=num%n;
                    }
                    result[i]=NULL;
                    for(i=0;i<strlen(result);i++)
                        {
                            if(result[i]!='0') {res=0;break;}
                            else res=1;
                        }
                        if(res==1) {printf("0\n");continue;}
                for(i;result[i];i++)
                    {
                        printf("%c",result[i]);
                    }
                printf("\n");
            }
        else if(c=='%')
            {
                for(i=0;a[i];i++)
                    {
                        r=(r*10+(a[i]-48))%n;
                    }
                printf("%lld\n",r);
            }
    }
    return 0;
}

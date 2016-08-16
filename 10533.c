//uva 10553

#include<bits/stdc++.h>
using namespace std;
#define maxm 1000000
bool prime[maxm];
long int total[maxm];
using namespace std;


long int nnum(long int n)
{
    long int new_num=0,mod;
    while(n>0)
    {
        mod = n%10;
        n/=10;
        new_num+=mod;
    }
    return new_num;
}

void sieve()
{
    long int i,j,k,s,n;
    for(i=4; i<maxm; i+=2)
    {
        prime[i]=true;
    }
    s=sqrt(maxm);
    for(i=3; i<=s; i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i; j<maxm; j+=i)
            {
                prime[j]=true;
            }
        }
    }

    // precalculation of digit sum
    long int tmp;
    total[0]=total[1]=0;
    total[2]=1;
    for(i=3; i<maxm; i++)
    {
        if(prime[i]==false)
        {
            tmp = nnum(i);
            if(prime[tmp]==false)
            {
                total[i] = total[i-1]+1;
            }
            else
            {
                total[i] = total[i-1];
            }
        }
        else
        {
            total[i] = total[i-1];
        }
    }
}



int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    long int cs,a,b,i,c;
    scanf("%ld",&cs);
    while(cs--)
    {
        scanf("%ld %ld",&a,&b);
        c=total[b]-total[a-1];

        printf("%ld\n",c);
    }
    return 0;
}

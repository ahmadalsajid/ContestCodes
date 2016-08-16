#include<bits/stdc++.h>
using namespace std;
#define max 10000001
bool prime[max];
long int i,j, srt,number;

void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(i=4;i<max;i+=2)
    {
        prime[i]=false;
    }
    srt=sqrt(max);
    for(i=3;i<=srt;i++)
    {
        if(prime[i])
        {
            for(j=i*i;j<max;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    sieve();
    while(cin>>number)
    {
        if(number<=8)
        {
            cout<<"Impossible.\n";
        }
        else
            {
                if(number&1)
                {
                    cout<<"2 3 ";
                     number-= 5;
                }
                else
                {
                    cout<<"2 2 ";
                    number-= 4;
                }
                for(i=2;number-i>=2;i++)
                {
                    if(prime[i]&&prime[number-i])
                    {
                        cout<<i<<" "<<number-i<<endl;
                        break;
                    }
                }

            }
    }

    return 0;
}

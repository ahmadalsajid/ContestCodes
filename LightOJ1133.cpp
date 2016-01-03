#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int lln;
int main()
{
    lln a[200],n,m,i,j,c=0,C,D,X,Y,t;
    cin>>C;
    while(C--){
     cin>>n>>m;
     for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    char ch;
    for(j=0;j<m;j++)
        {
            cin>>ch;
            switch(ch){
            case 'S' :
                            cin>>D;
                            for(i=0;i<n;i++)
                                {
                                    a[i]+=D;
                                }
                            break;

            case 'M' :
                            cin>>D;
                            for(i=0;i<n;i++)
                                {
                                    a[i]*=D;
                                }
                            break;

            case 'D' :
                            cin>>D;
                            for(i=0;i<n;i++)
                                {
                                    a[i]/=D;
                                }
                            break;

            case 'R' :
                           reverse(a,a+n);
                            break;

            case 'P' :
                            cin>>X>>Y;
                            t=a[X];
                            a[X]=a[Y];
                            a[Y]=t;
                            break;
            }
        }
        cout<<"Case "<<++c<<":\n";
        for(i=0;i<n;i++)
            {
                cout<<a[i];
                if(i<n-1) cout<<" ";
            }
        cout<<endl;

    }
    return 0;
}

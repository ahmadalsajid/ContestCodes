#include<iostream>
#include<queue>
using namespace std;
int main()
{
  long long n,i,s,t,a;
  while((cin>>n)&&n){
    priority_queue <long long ,vector<long long>,greater<long long> >se;
    s=0;
    for(i=0;i<n;i++)
        {
            cin>>a;
            se.push(a);
        }

    do{
        t=se.top();
        se.pop();
        t+=se.top();
        se.pop();
        s+=t;
        se.push(t);
    }while(se.size()>1);
    cout<<s<<endl;
  }
    return 0;
}

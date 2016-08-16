#include<iostream>
#include<queue>
using namespace std;
int main()
{
   int n,i,t;
   while((cin>>n)&&n){
    queue<int>q;
    for(i=1;i<=n;i++) q.push(i);

            cout<<"Discarded cards:";
            while(q.size()>1){
                cout<<" "<<q.front(); q.pop();
                if(q.size()>1) cout<<",";
                t=q.front();q.pop();
                 q.push(t);
            }
            cout<<endl;
            cout<<"Remaining card:"<<" "<<q.front();
    cout<<endl;
   }
    return 0;
}

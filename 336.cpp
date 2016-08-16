#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define max 100000
ull cases,x,y,case_no=0,source,destination,ttl,i,u,v;
ull dis[max];

bool visit[max];

int main()
{


    while(cin>>cases && cases)
    {
        vector<ull>V[max];
        for(i=0;i<cases;i++){
            cin>>x>>y;
        V[x].push_back(y);
        V[y].push_back(x);
        }


        while((cin>>source>>ttl))
        {
            if(source==0 && ttl==0) break;
            ull reachable=0;
            ull nodes=0;
            memset(dis,0,sizeof(dis));
            memset(visit,false,sizeof(visit));
            queue<ull>q;
            q.push(source);
            dis[source]=0;
            visit[source]=true;
            while(!q.empty())
            {
                u = q.front();
                q.pop();
                for(i=0;i<V[u].size();i++)
                {
                    v=V[u][i];
                    if(!visit[v]){
                        visit[v]=true;
                        dis[v]=dis[u]+1;
                        if(dis[v]<=ttl) reachable++;
                        nodes++;
                        q.push(v);
                    }
                }
            }
            printf("Case %llu: %llu nodes not reachable from node %llu with TTL = %llu.\n",++case_no,(nodes-reachable),source,ttl);
        }
    }

    return 0;
}

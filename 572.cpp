#include<bits/stdc++.h>
using namespace std;

vector <string> v;
string str;
bool visit[105][105];
int m,n,total;
int dir_x[] = { 0, 1, 1, 1, 0,-1,-1,-1};
int dir_y[] = { 1, 1, 0,-1,-1,-1, 0, 1};

void dfs(int a, int b)
{
    visit[a][b] = true;
    int x,y;
    for(int i=0;i<8;i++)
    {
        x=a+dir_x[i];
        y=b+dir_y[i];
        if(x>=0 and x<m and y>=0 and y<n and !visit[x][y])
        {
            visit[x][y]=true;
            if(v[x][y]=='@') dfs(x,y);
        }
    }

}
int main()
{
    while(cin>>m>>n)
    {
        if(!m) break;
        memset(visit,false,sizeof(visit));
        for(int i=0; i<m; i++)
        {
            cin>>str;
            v.push_back(str);
        }
        total=0;
        for(int i=0; i<m; i++)
        {
            for(int j =0; j<n; j++)
            {
                if(!visit[i][j])
                {
                    visit[i][j]=true;
                    if(v[i][j]=='@')
                    {
                        total++;
                        dfs(i,j);
                    }
                }
            }
        }
        cout<<total<<endl;
        v.clear();

    }

    return 0;
}

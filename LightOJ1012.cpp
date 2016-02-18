#include<bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};int dy[4] = {0, 1, 0, -1};
char str[100][100];
int row,col,t,T,counter;
void dfs(int i, int j)
{
   if((i>=0 and i<row) and (j>=0 and j<col))
   {
       if(str[i][j]=='.')
       {
           counter++;
           str[i][j]='#';
           for(int a =0;a<4;a++)
           {
               dfs(i+dx[a],j+dy[a]);
           }
       }
   }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int i,j;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        counter=0;
        scanf("%d %d",&col,&row);
        getchar();
        for(i=0;i<row;i++) scanf("%s",str[i]);
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(str[i][j]=='@')
                {
                    str[i][j]='.';
                        dfs(i,j);
                }
            }
        }
        printf("Case %d: %d\n",t,counter);
    }
    return 0;
}

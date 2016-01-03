#include<bits/stdc++.h>
using namespace std;

int main()
{

    int cs,sz,op,i,dt,j;
    cin>>cs;
    char cmd[20];
    for(j=1; j<=cs; j++)
    {
        cin>>sz>>op;
        printf("Case %d:\n",j);
        deque<int> dq;
        for(i=0; i<op; i++)
        {
            scanf("%s",cmd);
            if(!strcmp("pushLeft",cmd))
            {
                cin>>dt;
                if(dq.size()==sz)
                {
                    printf("The queue is full\n");
                }
                else
                {
                    dq.push_front(dt);
                    printf("Pushed in left: %d\n",dt);
                }
            }
            else if(!strcmp("pushRight",cmd))
            {
                cin>>dt;
                if(dq.size()==sz)
                {
                    printf("The queue is full\n");
                }
                else
                {
                    dq.push_back(dt);
                    printf("Pushed in right: %d\n",dt);
                }
            }
            else if(!strcmp("popLeft",cmd))
            {
                if(dq.empty()) printf("The queue is empty\n");
                else
                {
                    printf("Popped from left: %d\n",dq.front());
                    dq.pop_front();
                }

            }
            else if(!strcmp("popRight",cmd))
            {
                if(dq.empty()) printf("The queue is empty\n");
                else
                {
                    printf("Popped from right: %d\n",dq.back());
                    dq.pop_back();
                }
            }
        }

    }

    return 0;
}

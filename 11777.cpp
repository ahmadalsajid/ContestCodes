#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ct[3],t[2],cs,cn=0,f,a;
    cin>>cs;
    while(cs--)
    {
        cin>>t[0]>>t[1]>>f>>a>>ct[0]>>ct[1]>>ct[2];
        sort(ct,ct+3);
        int total = t[0]+t[1]+f+a+(ct[1]+ct[2])/2;
        printf("Case %d: ",++cn);
        switch(total)
        {
        case 90 ... 100:
            printf("A\n");
            break;
        case 80 ... 89:
            printf("B\n");
            break;
        case 70 ... 79:
            printf("C\n");
            break;
        case 60 ... 69:
            printf("D\n");
            break;
        default:
            printf("F\n");
        }
    }
    return 0;
}


/*#include<stdio.h>
int main()
    {
        int T1,T2,F,A,CT1,CT2,CT3,tc,i,act,tm;
        scanf("%d",&tc);
        for(i=1;i<=tc;i++)
            {
                tm=0;
                act=0;
                scanf("%d %d %d %d %d %d %d",&T1,&T2,&F,&A,&CT1,&CT2,&CT3);

                if(CT1>=CT3&&CT2>=CT3) act=(CT1+CT2)/2;
                else if(CT1>=CT2&&CT3>=CT2) act=(CT1+CT3)/2;
                else if(CT2>=CT1&&CT3>=CT1) act=(CT3+CT2)/2;
                tm=T1+T2+F+A+act;

                if(tm>=90) printf("Case %d: A\n",i);
                else if(tm>=80&&tm< 90) printf("Case %d: B\n",i);
                else if(tm>=70&&tm< 80) printf("Case %d: C\n",i);
                else if(tm>=60&&tm< 70) printf("Case %d: D\n",i);
                else if(tm<70) printf("Case %d: F\n",i);
            }
        return 0;
    }
*/

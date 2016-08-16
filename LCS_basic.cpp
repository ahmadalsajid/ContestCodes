#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

#define mx 100

char tmp[mx];
int c[mx][mx],i,j;


int LCS(char a[],char b[])
{
    int m,n;
    int t=0;
    char X[mx],Y[mx];
    strcpy(X," ");
    strcpy(Y," ");

    strcat(X,a);
    strcat(Y,b);

    m= strlen(X);
    n= strlen(Y);

    for(i=0;i<m;i++)
    {
        c[i][0]=0;
    }
    for(j=0;j<n;j++)
    {
        c[0][j]=0;
    }

    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            if(X[i]==Y[j])
            {
                 c[i][j] = (c[i-1][j-1]) +1;
                 tmp[t] = X[i];
                 t++;
            }
            else
            {
                c[i][j] = max(c[i-1][j], c[i][j-1]);
            }
        }
    }
    tmp[t]='\0';
    return c[m-1][n-1];

    return 0;
}


int main()
{
    char str1[mx], str2[mx];
    gets(str1);
    gets(str2);
    int length = LCS(str1,str2);
    cout<<"The length of LCS is: "<<length<<endl<<"LCS: "<<tmp<<endl;
    return 0;
}

#include<stdio.h>
int main()
    {
        int L[50],l,tc,t,i,j,k,S;
        scanf("%d",&tc);
        for(k=0;k<tc;k++)
            {
                S=0;
                scanf("%d",&l);
                for(i=0;i<l;i++)
                    {
                        scanf("%d",&L[i]);
                    }
                for(i=1;i<=l;i++)
                    {
                        for(j=0;j<l-1;j++)
                            {
                                if(L[j]>L[j+1])
                                    {
                                        t=L[j];
                                        L[j]=L[j+1];
                                        L[j+1]=t;
                                        S++;
                                    }
                            }
                    }
                printf("Optimal train swapping takes %d swaps.\n",S);
            }
        return 0;
    }

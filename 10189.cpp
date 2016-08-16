#include <stdio.h>
#include <string.h>

int main ()
{
    char inp[105][105];
    int n, m, r, c, cs=0, Flag = 0;


    while (1){
        scanf("%d %d",&n,&m);
            getchar();
        if (n==0 && m==0)
            break;

        int ms[105][105] = {0};

        for (r=0; r<n; r++) gets (inp[r]);

        for (r=0; r<n; r++ ) {

            for (c=0; c<m; c++){

                if (inp[r][c]=='*'){
                    ms[r][c+1]++;
                    ms[r+1][c+1]++;
                    ms[r+1][c]++;
                    ms[r+1][c-1]++;
                    ms[r][c-1]++;
                    ms[r-1][c-1]++;
                    ms[r-1][c]++;
                    ms[r-1][c+1]++;
                }
            }

        }

        if (Flag) printf("\n");
        Flag = 1;
        printf("Field #%d:\n", ++cs);
        for (r=0; r<n; r++)
            {
                for (c=0; c<m; c++)
                    {
                        if (inp[r][c]=='*') printf("%c", inp[r][c]);
                        else  printf("%d", ms[r][c]);
                    }
                printf("\n");
            }
    }
    return 0;
}

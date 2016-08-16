#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,C;
    char S[100010];
    while(gets(S))
    {
        C=0;

        for(i=0;S[i]!='\0';i++)
        {
            switch(S[i])
            {
                case '!':
                    {
                        printf("\n"); break;
                    }
            case '1':
            C=C+1;
            break;
            case '2':
            C=C+2;
            break;
            case '3':
            C=C+3;
            break;
            case '4':
            C=C+4;
            break;
            case '5':
            C=C+5;
            break;
            case '6':
            C=C+6;
            break;
            case '7':
            C=C+7;
            break;
            case '8':
            C=C+8;
            break;
            case '9':
            C=C+9;
            break;
            case 'b':
            {
            for(j=1;j<=C;j++)
            printf(" ");
            C=0;
            break;
            }
            Default:
                {
                for(j=0;j<C;j++)
                printf("%c",S[i]);
                C=0;    break;
                }
            }
        }
        printf("\n");
        }
    return 0;
}

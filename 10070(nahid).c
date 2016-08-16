#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000000];
    long int i,j,res,flag1,flag2,flag3,f=0,flag4,flag5,clue,z,flag6,len;
    while(gets(ch))
    {
        len=strlen(ch);
        flag1=0,flag2=0,flag3=0;flag4=0,flag5=0,flag6=0,clue=0;
        if(f!=0)
        {
            printf("\n");
        }
        f=1;

    for(j=1; j<=5; j++)
    {
        res=0;
        z=0;
        if(j==1)
        {
            for(i=0; i<len; i++)
            {
                z=(z*10+ch[i]-48);
                z=z%4;
            }
            if(z==0)
            {
                flag1=0;
            }
            else
            {
                flag1=1;
            }
        }
        else if(j==2)
        {
            for(i=0;  i<len; i++)
            {
                z=(z*10+ch[i]-48);
                z=z%15;
            }
            if(z==0)
            {
                flag2=0;
            }
            else
            {
                flag2=1;
            }
        }
        else if(j==3)
        {
            for(i=0; i<len; i++)
            {
                z=(z*10+ch[i]-48);
                z=z%55;
            }
            if(z==0)
            {
                flag3=0;
            }
            else
            {
                flag3=1;
            }
        }
        else if(j==4)
        {
            for(i=0; i<len;i++)
            {
                z=(z*10+ch[i]-48);
                z=z%400;
            }
            if(z==0)
            {
                flag4=0;
            }
            else
            {
                flag4=1;
            }
        }
        else if(j==5)
        {
            for(i=0; i<len;i++)
            {
                z=(z*10+ch[i]-48);
                z=z%100;
            }
            if(z==0)
            {
                flag5=0;
            }
            else
            {
                flag5=1;
            }
        }
    }
    if((flag1==0&&flag5!=0)||flag4==0)
    {
        printf("This is leap year.\n");
        clue=1;
        flag6=1;
    }
    if(flag2==0)
    {
        printf("This is huluculu festival year.\n");
        flag6=1;
    }
    if(clue==1&&flag3==0)
    {
        printf("This is bulukulu festival year.\n");
    }
    if(flag6==0)
    {
        printf("This is an ordinary year.\n");

    }

    }

    return 0;
}

#include <stdio.h>
#include<string.h>
int main()
{
   int test,i,j,count;
   char str[101];
        scanf("%d",&test);
        getchar();
   for(i=0;i<test;i++)
   {
      gets(str);
       j=0;
       count=0;
      while(str[j]!='\0')
      {

if(str[j]==' ')count+=1;
else if(str[j]=='a' || str[j]=='d' || str[j] == 'g' || str[j] =='j' || str[j]=='m' || str[j] == 'p' || str[j] == 't' || str[j] =='w')count+=1;
else if(str[j]=='b' || str[j]=='e' || str[j] == 'h' || str[j] =='k' || str[j]=='n' || str[j] == 'q' || str[j] == 'u' || str[j] =='x')count+=2;
else if(str[j]=='c' || str[j]=='f'  || str[j] == 'i' || str[j] =='l' || str[j]=='o' || str[j] == 'r' || str[j] == 'v' || str[j] == 'y')count+=3;
else count+=4;
j++;
}
printf("Case #%d: %d\n",i+1,count);
}
return 0;

}

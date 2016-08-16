#include<stdio.h>
int ar[100]={76,3,94,55,21,1};
void bubble_sort()
{
    int i,j,tmp;
    for(int i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(ar[i]>ar[j])
            {
               tmp = ar[i];
               ar[i]=ar[j];
               ar[j]=tmp;
            }
        }
    }
}
int main()
{
    int i,j,value,r;
    for(i=0;i<6;i++)
        printf("%d ",ar[i]);
    printf("\n");
    bubble_sort();
    for(i=0;i<6;i++)
        printf("%d ",ar[i]);
    return 0;
}

#include<stdio.h>
int main()
{
    int size;
    int i,j,num,count=0;
    int a[size-1];
    printf("Enter number of digits need to be entered");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
             if(a[i]+a[j]==num)
             {
                 count++;
             }
        }
    }
    if(count>0)
    {
      printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}

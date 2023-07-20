#include<stdio.h>
int main()
{
    int size,arr[size],i,j,x,flag=0,sum;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                flag=flag+1;
            }
        }
    }
    //printf("%d",flag);
    if(flag > 0)
    {
        printf("True");
    }
    else
    {
        printf("Flase");
    }
}

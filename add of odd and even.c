#include<stdio.h>
int main()
{
  int a[50],size,i,sum=0,sum1=0;
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<size;i++)
  {
    if(a[i]%2==0)
    {
    sum=sum+a[i];
    }
    else
    {
     sum1=sum1+a[i];
    }
  }
  printf("even:%d\n",sum);
  printf("odd:%d",sum1);

  return 0;
}

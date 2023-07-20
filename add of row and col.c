#include<stdio.h>
int main()
{
  int a[50][50];
  int i,j,row,column;
  int add=0;
  scanf("%d",&row);
  scanf("%d",&column);
  for(i=0;i<row;i++)
  {
   for(j=0;j<column;j++)
   {
     scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<row;i++)
  {
   for(j=0;j<column;j++)
   {
     add=add+a[i][j];
   }
   printf("%d ",add);
   add=0;
  }
  printf("\n");
  for(j=0;j<column;j++)
  {
   for(i=0;i<row;i++)
   {
     add=add+a[i][j];
   }
   printf("%d ",add);
   add=0;
  }
  printf("\n");
  return 0;
}

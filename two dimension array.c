#include<stdio.h>
int main()
{
    int a[50][50],i,j,row,column;
    scanf("%d",&row);
    scanf("%d",&column);
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

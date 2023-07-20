#include <stdio.h>
int main()
{
    int numPlayers;
    scanf("%d",&numPlayers);
    int a[numPlayers];
    int i,j;
    for(i=0;i <numPlayers;i++)
    {
        scanf("%d", &a[i]);
    }
    int temp=a[0];
    for(i=1;i<numPlayers;i++)
    {
        if(a[i]>temp)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("%d\n",temp);
    return 0;
}

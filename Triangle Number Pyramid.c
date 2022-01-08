#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter Number of lines ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        for(col=row-1; col>0; col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}

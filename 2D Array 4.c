#include<stdio.h>
int main()
{
    int row,col;

    int A[3][4],B[3][4];

    printf("Enter element for A matrix.\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }

    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }

        printf("Enter element for B matrix.\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            scanf("%d",&B[row][col]);
        }
    }

    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("%d ",B[row][col]);
        }
        printf("\n");
    }







}


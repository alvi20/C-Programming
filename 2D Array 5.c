#include<stdio.h>
int main()
{
    int row,col,numberofRows,numberofCols;

    int A[10][10],B[10][10],C[10][10];


    printf("Enter number of rows and cols : ");
    scanf("%d%d",&numberofRows,&numberofCols);

    printf("Enter element for A matrix.\n");
    for(row=0;row<numberofRows;row++)
    {
        for(col=0;col<numberofCols;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }

    for(row=0;row<numberofRows;row++)
    {
        for(col=0;col<numberofCols;col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }

        printf("Enter element for B matrix.\n");
    for(row=0;row<numberofRows;row++)
    {
        for(col=0;col<numberofCols;col++)
        {
            scanf("%d",&B[row][col]);
        }
    }

    for(row=0;row<numberofRows;row++)
    {
        for(col=0;col<numberofCols;col++)
        {
            printf("%d ",B[row][col]);
        }
        printf("\n");
    }

        for(row=0;row<numberofRows;row++)
    {
        for(col=0;col<numberofCols;col++)
        {
            C[row][col]=A[row][col]+B[row][col];
        }

    }
     for(row=0;row<numberofRows;row++)
    {
        for(col=0;col<numberofCols;col++)
        {
            printf("%d ",C[row][col]);
        }
        printf("\n");
    }











}



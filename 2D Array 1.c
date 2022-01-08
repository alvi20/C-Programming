
#include<stdio.h>
int main()
{
    int row,col;
    int A[3][4]={{10,45,65,45},{34,65,76,87},{9,10,11,12}};

    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }





}

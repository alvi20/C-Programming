#include<stdio.h>
int main()
{
    int col,row;
    int A[3][4]={{5,4,3,2}, {4,7,8,2}, {32,65,21,64}};

    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }

}

#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;

    printf("Enter rows and columns for first matrix ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns for second matrix ");
    scanf("%d%d",&r2,&c2);



    while(c1!=r2)
    {
        printf("Error !! column of the matrix not equal to row of second\n");
        printf("Enter rows and columns for first matrix ");
        scanf("%d%d",&r1,&c1);

        printf("Enter rows and columns for second matrix ");
        scanf("%d%d",&r2,&c2);

    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&first[i][j]);

    }


       printf("\nFirst Matrix\n");
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%d",first[i][j]);
    }


    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            scanf("%d",&second[i][j]);

    }

        printf("\nSecond Matrix\n");
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d",second[i][j]);
    }













}

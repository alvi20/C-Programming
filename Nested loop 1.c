
#include<stdio.h>
int main()
{
    int col,row;
    //printf("Enter Number of N ");
    //scanf("%d",&n);
    for(row=1; row<=7; row++)
    {
        for(col=1; col<=7-row; col++)
        {
            printf("%d",col%2);
        }
        printf("\n");
    }

}

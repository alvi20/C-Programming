
#include<stdio.h>
int main()
{
    int col,row,n;
    printf("Enter Number of N ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
        printf("\n");
    }

}

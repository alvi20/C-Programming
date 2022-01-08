
#include<stdio.h>
int main()
{
    int col,row,n;
    printf("Enter Number of N ");
    scanf("%d",&n);
    for(row=n;row<=n;row--){
        for(col=n;col<=row;col++){
            printf("%d",row);
        }
        printf("\n");
    }

}

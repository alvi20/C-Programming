
#include <stdio.h>

int main()
{
    int i=2,n,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
        if(i%2==0)
        {
         sum=sum+i;

        }

    printf("Total sum is %d",sum);

}

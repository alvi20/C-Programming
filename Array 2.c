#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("How many numbers ");

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum is %d\n",sum);
    printf("Average is %.2f\n",(float)sum/n);
}

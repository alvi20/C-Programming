#include<stdio.h>
main()
{
    int a;
    printf("Enter your age ");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("You are eligible");
    }
    else
    {
        printf("You are not eligible");
    }
    return 0;
}

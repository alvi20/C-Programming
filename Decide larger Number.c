#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter number of a ");
    scanf("%d",&a);
    printf("Enter number of b ");
    scanf("%d",&b);
    printf("Enter number of c ");
    scanf("%d",&c);
    if((a>b)&&(c<a))
    {
        printf("a is large",a);
    }
    if((a<b)&&(b>c))
    {
        printf("b is large",b);
    }
    if((b<c)&&(c>a))
    {
        printf("c is large",c);
    }
    return 0;
}

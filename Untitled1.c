#include<stdio.h>
main()
{
    float unit,bill=0;
    scanf("%f",&unit);
    if(unit>300)
    {
        float rem=unit-300;
        bill=100*5+100*5.5+100*6+rem*7;
    }
    if(unit>200)
    {
        float rem=unit-200;
        bill=100*5+100*5.5+rem*6;
    }
    if(unit>100)
    {
        float rem=unit-100;
        bill=100*5+rem*5.5;
    }
    else if(unit>0)
    {
        float rem=unit-0;
        bill=unit*5;
    }
    printf("%f",bill);
    return 0;
}

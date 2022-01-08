#include<stdio.h>
int main()
{
    int choice;
    float temp,ConvertedTemp;
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
        printf("Enter the fahrenheit");
        scanf("%f",&temp);
        ConvertedTemp=(temp-32)/1.8;
        printf("Temperature in Celcius is %f\n",ConvertedTemp);
        break;
        }
    case 2:
        {
        printf("Enter the Celsuis");
        scanf("%f",&temp);
        ConvertedTemp=(1.8*temp)+32;
        printf("Temperature in fahrenheit is %f\n",ConvertedTemp);
        }
default:
        printf("Not Correct option");
    }
}


#include<stdio.h>

//global structure
struct person
{
    int age;
    float salary;


};

int main()
{
    struct  person person1,person2;



    printf("Person 1:\n");

    printf("Enter Age: ");
    scanf("%d",&person1.age);

    printf("Enter Salary: ");
    scanf("%f",&person1.salary);

    printf("Age= %d\n",person1.age);
    printf("Salary=%.2f\n",person1.salary);



    printf("Person 2:\n");

    printf("Enter Age: ");
    scanf("%d",person2.age);

    printf("Enter Salary: ");
    scanf("%f",person2.salary);

    printf("Age= %d\n",person2.age);
    printf("Salary=%.2f",person2.salary);

    getch();
}

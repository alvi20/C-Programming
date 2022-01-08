#include<stdio.h>

//global structure
int main()
{
struct person
{
    int age;
    float salary;


};

    struct  person person1,person2;

    person1.age= 27;
    person1.salary=2750.50;

    printf("Person 1:\n");
    printf("Age= %d\n",person1.age);
    printf("Salary=%.2f\n",person1.salary);

    person2.age= 30;
    person2.salary=3650.50;

    printf("Person 2:\n");
    printf("Age= %d\n",person2.age);
    printf("Salary=%.2f",person2.salary);

    getch();
}


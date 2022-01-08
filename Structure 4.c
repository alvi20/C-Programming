
#include<stdio.h>

//global structure
struct person
{
    int age;
    float salary;


};

int main()
{
    struct  person person1={27,2345.76};

    struct person person2,person3;

    person2.age=29;
    person2.salary=3456.76;

    person3=person2;



    printf("Person 1:\n");


    printf("Age= %d\n",person1.age);
    printf("Salary=%.2f\n",person1.salary);



    printf("\nPerson 2:\n");

    printf("Age= %d\n",person2.age);
    printf("Salary=%.2f",person2.salary);


    printf("\n\nPerson 3:\n");

    printf("Age= %d\n",person3.age);
    printf("Salary=%.2f",person3.salary);

    getch();
}

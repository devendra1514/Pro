/* WAP to input employ name, id, age and salary and print it. using struct and typedef keyword.*/

#include<stdio.h>
#include<conio.h>
typedef struct
{
    int age,id;
    char name[20];
    float salary;
}profile;
void main()
{
    profile d1;
    printf("Enter employ name:");
    gets(d1.name);
    printf("Enter employ id:");
    scanf("%d",&d1.id);
    printf("Enter employ age:");
    scanf("%d",&d1.age);
    printf("Enter employ salary:");
    scanf("%f",&d1.salary);
    printf("Name:");
    puts(d1.name);
    printf("ID:%d",d1.id);
    printf("\nAge:%d",d1.age);
    printf("\nSalary:%f",d1.salary);
}
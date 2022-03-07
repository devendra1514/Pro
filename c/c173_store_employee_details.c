/*Write a program to store 3 employee details in user defined data type. Means structure.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
    char name[20];
    int code;
    float salary;
};
void main()
{
    struct employee e1,e2;
    strcpy(e1.name,"dev patidar");
    e1.code=33;
    e1.salary=50.44;
    strcpy(e2.name,"dev");
    e2.code=3;
    e2.salary=55.44;
    printf("\nName   : %s",e1.name); 
    printf("\nCode   : %d",e1.code);
    printf("\nSalary : %f",e1.salary);
    
    printf("\nName   : %s",e2.name); 
    printf("\nCode   : %d",e2.code);
    printf("\nSalary : %f",e2.salary);
}
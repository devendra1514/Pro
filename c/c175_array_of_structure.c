/* Write a program to store 3 employee details in array of structure */
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
    struct employee facebook[2];
    strcpy(facebook[0].name,"dev patidar");
    facebook[0].code=33;
    facebook[0].salary=50.44;
    strcpy(facebook[1].name,"dev");
    facebook[1].code=3;
    facebook[1].salary=55.44;
    printf("\nName : %s",facebook[0].name); 
    printf("\nCode : %d",facebook[0].code);
    printf("\nSalary : %f",facebook[0].salary);
    
    printf("\nName : %s",facebook[1].name); 
    printf("\nCode : %d",facebook[1].code);
    printf("\nSalary : %f",facebook[1].salary);
}
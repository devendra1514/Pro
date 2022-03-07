/* Write a program to store 3 employee details in structure using pointer. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
    char name[20];
    int code;
    float salary;
};
void fun(struct employee* E1){
    printf("Enter employee name:");
    fflush(stdin);              //flush funtion is clear garbage of above code
    gets(E1->name);
    printf("Enter employee code:");
    scanf("%d",&E1->code);
    printf("Enter employee salary:");
    scanf("%f",&E1->salary);
}
void show(struct employee* E1){
    printf("\nName : %s",E1->name);
    printf("\nCode : %d",E1->code);
    printf("\nSalary:%.3f",E1->salary);
}
void main(){
    struct employee e1,e2;
    fun(&e1);
    fun(&e2);
    show(&e1);
    show(&e2);
}


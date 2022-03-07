/* Write a program to store 3 employee details in of array of structure using pointer */
#include<stdio.h>
#include<string.h>
typedef struct 
{
    char name[20];
    int code;
    float salary;
}employee;

static int start=1,stop=1;
void setInfo(employee* temp)
{
    printf("Enter %d employee name : ",start);
    fflush(stdin);         //clear garbage value
    gets(temp->name);     //scanf() not work  in this case
    printf("Enter %d employee code : ",start);
    scanf("%d",&temp->code);
    printf("Enter %d employee salary :",start);
    scanf("%f",&temp->salary);
    start++;
}
void showInfo(employee temp)
{
    printf("\n%d employee name : %s",stop,temp.name);
    printf("\n%d employee code : %d",stop,temp.code);
    printf("\n%d employee salary:%.2f",stop,temp.salary);
    stop++;
}
void main()
{
    employee facebook[3];
    for(int i=0;i<3;i++)
    {
        setInfo(&facebook[i]);
    }
    for(int i=0;i<3;i++)
    {
        showInfo(facebook[i]); //if we pass the address of facebook to showInfo fun so it is enable to change the data 
    }
}
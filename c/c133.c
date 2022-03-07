/* use union  keyword */

#include<stdio.h>
#include<conio.h>
union profile
{
    int id;
    float salary;
};
void main()
{
    union profile d1;
    printf("Enter id of employ:");
    scanf("%d",&d1.id);    
    printf("Enter salary of employ:");
    scanf("%f",&d1.salary);
    printf("%d\n",d1.id);
    printf("%f",d1.salary);
    /*d1.id=234534;
    printf("%d",d1.id);
    d1.salary=34.55;
    printf("\n%f",d1.salary);*/
}
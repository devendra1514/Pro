// 3)WAP to input name, age and weight and print with user defined massage.
#include<stdio.h>
int main()
{
    char name[20];
    int age;
    float weight;
    printf("Enter your name:");
    gets(name);
    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter your weight:");
    scanf("%f",&weight);
    printf("Your name : %s",name);
    printf("\nYour age : %d",age);
    printf("\nYour weight : %f",weight);
    return 0;
}
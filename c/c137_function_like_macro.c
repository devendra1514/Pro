/* WAP to find the area of circle using function like macro.*/
#include<stdio.h>
#include<conio.h>
#define pi 3.1415             // #define preprocessor macro
#define area(r) (pi*r*r)      // function like preprocessor macro
void main()
{
    int r;
    float area=0;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    area=area(r);
    printf("Area of circle:%f",area);
    getch();
}
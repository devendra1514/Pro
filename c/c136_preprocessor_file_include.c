/* preprocessor file inclusion*/

#include<stdio.h>
#include<conio.h>
#include"C:\Users\deven\Pro\c\c136_half.c"
void main()
{
    float radius,area=0;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    area=areaofcircle(radius);
    printf("area of circle:%f",area);
}
/* program to convert fahrenheit to calsius*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float f;
    printf("Enter farenheit to convert into celcius:");
    scanf("%f",&f);
    printf("%.2f C",(f-32)*5/9);
    getch();
}
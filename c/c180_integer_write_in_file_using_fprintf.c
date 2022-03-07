// 180)WAP to write an integer in a file using fprintf() function.
#include<stdio.h>
void main()
{
    FILE*fp;
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Your data is saved in c180_fprintf_integer.txt file");
    fp=fopen("c180_fprintf_integer.txt","w");
    fprintf(fp,"%d",num);
    fclose(fp);
}
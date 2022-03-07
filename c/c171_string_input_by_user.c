/* Input a string in different ways */

#include<stdio.h>
#include<conio.h>
void  main()
{
    char ch[10],*ch1;
    printf("Enter your name:");
    scanf("%s",ch);
    printf("%s",ch);

    printf("Enter your name:");
    scanf("%s",&ch);
    printf("%s",ch);   
    
    printf("Enter your name:");
    scanf("%s",&ch[0]);
    printf("%s",ch);
    
    printf("Enter your name:");
    gets(ch1);
    printf("%s",ch1)
}
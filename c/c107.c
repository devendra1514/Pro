/* WAP to print following pattern 
      *
     *** 
    ***** 
   *******
  *********
  */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,no=1;
    printf("enter size of paramid:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++,no+=2)
    {
        for(int j=num;j>=i+1;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=no;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}  
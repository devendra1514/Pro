/* WAP to print the infomation of client if user enter a right password */
#include<stdio.h>
#include<conio.h>
void main()
{
    int temp=123456789;
    int password;
    do{
        printf("\n>>>Enter password :");
        scanf("%d",&password);
        if(password==temp)
        {
            printf("\nName   : Devendra Patidar");
            printf("\nDOB    : 08/03/2002");
            printf("\nMo.No. : 9516581514");
            printf("\nEmail  : deven32784@gmail.com");
            printf("\nAddress: Behari, Bagli, M.P.");
            printf("\n\n>>>Enter any key to exit");
            getch();
        }
        else
        {
            printf("\nEnter right password !!!!!\n");
        }
    }while(password != temp);
}
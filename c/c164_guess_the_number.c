/* small game on guessing number */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int num,guess=0,i=1;
    srand(time(0));
    num=rand()%100+1;
    printf("guess the number between 0 to 100 :\n");
    do
    {
        scanf("%d",&guess);
        if(guess>num)
        {
            printf("Enter lower number\n");
        }
        else if(guess<num)
        {
            printf("Enter higher number:\n");
        }
        else
        {
            printf("you guess the number in %d attemp\n",i);
            exit (0);
        }
        i++;
    } while(1);
    getch();
}
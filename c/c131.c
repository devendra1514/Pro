/* WAP to sum of n number input by user using malloc() fuction*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *ptr,i,n,num,sum=0;
    printf("Enter n number:");
    scanf("%d",&n);
    ptr=malloc(4);
    if(ptr==NULL)
        printf("memory not allocated");
    else
    {   printf("enter %d value:",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
            sum=sum+*(ptr+i);
        }    
        printf("sum:%d",sum);
        free(ptr);
        getch();
    }
}
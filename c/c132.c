/* WAP to sum of n number input by user using calloc() fuction*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n,*ptr,i,num,sum=0;
    printf("Enter n number:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("Enter %d element:",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&num);
            sum+=num;
        }
    }
    printf("sum:%d",sum);
    free(ptr);
    getch();
}
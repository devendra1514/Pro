#include<stdio.h>
#include<conio.h>

void main()
{
    
   char name[10];
   int roll;
   double p,c,m,cs,total;

   printf("enter your name:");
   scanf("%s",&name);
   printf("enter your roll no:");
   scanf("%d",&roll);
   printf("mark in physics:");
   scanf("%lf",&p);
   printf("mark in chemistry:");
   scanf("%lf",&c);
   printf("mark in maths:");
   scanf("%lf",&m);
   printf("mark in computer science:");
   scanf("%lf",&cs);

   total=p+c+m+cs;
   double per=total/4;

   printf("\nyour name:%s",name);
   printf("\nyour roll:%d",roll);
   printf("\nmark in physics:%lf",p);
   printf("\nmark in chemistry:%lf",c);
   printf("\nmark in maths:%lf",m);
   printf("\nmark in computer science:%lf",cs);
   printf("\ntotal marks:%lf",total);
   printf("\npercentage:%lf",per);
   getch();
}
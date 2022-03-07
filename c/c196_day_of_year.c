//day of which month 
#include<stdio.h>

int main()
{
   int a,d,m;
   printf("enter any day of year:");
   scanf("%d",&a);
   if(a>0&&a<=31)
     {
	   d=31-a;
	   m=31-d;
	   printf("1 month");
	   printf("\ndays:%d",m);
     }
   else if(a>31&&a<=59)
     {
	   d=59-a;
	   m=28-d;
	   printf("2 month");
	   printf("\ndays:%d",m);
     }
   else if(a>59&&a<=90)
     {
	   d=90-a;
	   m=31-d;
	   printf("3 month");
	   printf("\ndays:%d",m);
     }
   else if(a>90&&a<=120)
     {
	   d=120-a;
	   m=30-d;
	   printf("4 month");
	   printf("\ndays:%d",m);
     }
   else if(a>120&&a<=151)
     {
	   d=151-a;
	   m=31-d;
	   printf("5 month");
	   printf("\ndays:%d",m);
     }
   else if(a>151&&a<=181)
     {
	   d=181-a;
	   m=30-d;
	   printf("6 month");
	   printf("\ndays:%d",m);
     }
   else if(a>181&&a<=212)
     {
	   d=212-a;
	   m=31-d;
	   printf("7 month");
	   printf("\ndays:%d",m);
     }
   else if(a>212&&a<=243)
     {
	   d=243-a;
	   m=31-d;
	   printf("8 month");
	   printf("\ndays:%d",m);
     }
   else if(a>243&&a<=274)
     {
	   d=274-a;
	   m=30-d;
	   printf("9 month");
	   printf("\ndays:%d",m);
     }
   else if(a>274&&a<=304)
     {
	   d=304-a;
	   m=31-d;
	   printf("10 month");
	   printf("\ndays:%d",m);
     }
   else if(a>304&&a<=335)
     {
	   d=335-a;
	   m=30-d;
	   printf("11 month");
	   printf("\ndays:%d",m);
     }
   else if(a>335&&a<=365)
     {
	   d=365-a;
	   m=31-d;
	   printf("12 month");
	   printf("\ndays:%d",m);
     }
   else
      printf("day is out of year");
   return 0;
}

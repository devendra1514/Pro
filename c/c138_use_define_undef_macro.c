/* WAP to sum of two number using #define and #undef keyword*/

#include<stdio.h>
#define sum(a,b) a+b
void main()
{
    int n1,n2;
    printf("Enter two number:");
    scanf("%d%d",&n1,&n2);
    printf("sum of %d and %d is %d",n1,n2,sum(n1,n2));
#undef sum
    // sum(n1,n2);      //sum() function not work after is indefined
    int sum=n1+n2;
    printf("\n%d",sum);
}
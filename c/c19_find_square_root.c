// 19)WAP to input a number and find its square using math.h.
#include<stdio.h>
#include<math.h>
void main()
{
	int num;
	float sq;
	printf("enter no to find its square root:");
	scanf("%d",&num);
	sq=sqrt(num);
	printf("squar root:%f",sq);
}

// 14)WAP to input any five different number and print it addition and average.
#include<stdio.h>
void main()
{

	int n1,n2,n3,n4,n5,sum;
	float avg;
	printf("enter five diffrent value:");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	sum=n1+n2+n3+n4+n5;
	avg=sum/5;
	printf("sum:%d",sum);
	printf("average:%f",avg);
}
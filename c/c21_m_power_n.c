// 21)WAP to input any number find out x^n.
#include<stdio.h>
#include<math.h>

void main()
{
	int base,power,ans;
	printf("enter base value:");
	scanf("%d",&base);
	printf("enter power value:");
	scanf("%d",&power);
	ans=pow(base,power);
	printf("ans:%d",ans);
}
/* WAP to input 5 element and print it ascending order.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,swap,a[100],round,n;
    printf("Enter element in array:");
    scanf("%d",&n);
    printf("Enter %d value:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(round=1;round<n;round++)
    {
        for(i=0;i<n-round;i++)
        {
            if(a[i]>a[i+1])
            {
                swap=a[i];
                a[i]=a[i+1];
                a[i+1]=swap;
            }
        }
    }
    printf("ascending order: ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
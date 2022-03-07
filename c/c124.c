/* WAP to input n number of array and print ascending order using function pointer.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    void input(int *p,int q);      //funtion decleration
    void display(int *p,int q);
    void sort(int *p,int q);
    int *num,n;
    printf("Enter element of array:");
    scanf("%d",&n);
    input(num,n);
    printf("you enter:\n");
    display(num,n);
    sort(num,n);
    display(num,n);
}
void input(int *p,int q)
{
    int i;
    printf("Enter %d value:",q);
    for(i=0;i<q;i++)
        scanf("%d",(p+i));
}
void display(int *p,int q)
{
    int i=0;
    for(i=0;i<q;i++)
          printf("%d\n",*(p+i));
}
void sort(int *p,int q)
{
    int i,swap,r;
    for(r=q-1;r>0;r--)
    {
        for(i=0;i<r;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
                swap=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=swap;
            }
        }
    }
    printf("value in ascending order:\n");
}
/* insert a element in the specific position in the array */

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],i,size,num,pos,choice;
    printf("Enter size of array:");
    scanf("%d",&size);                  //Enter size of array by user
    if(size>10)                         //if size of array is greater than 10 than exit the program
    {
        printf("Array size is 10 but you enter out of size");
        exit (1);                                              //program end
    }
    else
    {
        printf("Enter %d element:",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);         //Enter element of array 
        }
        while(1)
        {
            printf("\n1.insert\n2.exit");
            printf("\nEnter your choice:");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                {
                    printf("Enter a element you insert in array:");
                    scanf("%d",&num);
                    printf("Enter which position you insert the value:");
                    scanf("%d",&pos);
                    if(pos<=0||pos>size+1)
                    {
                        printf("\nEnter location out of range\n");
                        break;
                    }
                    else if(size>9)
                    {
                        printf("Array is full");
                        exit (1);
                    }
                    else
                    {
                        for(i=size;i>=pos;i--)
                        {
                            arr[i]=arr[i-1];
                        }
                        arr[pos-1]=num;
                        size++;
                        for(i=0;i<size;i++)
                        {
                            printf("%d\n",arr[i]);
                        }
                    }
                    break;
                }
                case 2:
                {
                exit(1);
                }
            }
        }
    }
}
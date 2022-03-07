#include<stdio.h>
#include<conio.h>
typedef struct
{
    int bookid;
    char title[20];
    float price;
}book;
void main()
{
    book d1;
    FILE *fp;
    fp=fopen("file2.txt","wb");
    printf("Enter book id, title and price:");
    scanf("%d",&d1.bookid);
    fflush(stdin);
    gets(d1.title);
    scanf("%f",&d1.price);
    fwrite(&d1,sizeof(d1),1,fp);
    fclose(fp);
}
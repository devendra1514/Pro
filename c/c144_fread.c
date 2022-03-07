/* WAP to read content from a file and display on the screen. use fread() to read content from the file.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
void main()
{
    FILE *fp;
    struct book d1;
    fp=fopen("file2.txt","rb");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    fread(&d1,sizeof(d1),1,fp);
    printf("%d\n%s\n%.2f",d1.bookid,d1.title,d1.price);
    fclose(fp);
    getch();
}
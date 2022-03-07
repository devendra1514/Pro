/* WA structure to input a book_id and book title and price and print it.*/

#include<stdio.h>
#include<conio.h>
struct book
{
    int book_id;
    char title[20];
    float price;
};
void main() 
{
    struct book d1;
    struct book input();
    void display();
    d1=input();
    display(d1);
    getch();
}
struct book input()
{
    struct book b;
    printf("Enter book id/title/price");
    scanf("%d%s%f",&b.book_id,&b.title,&b.price);
    return (b);
}
void display(struct book b)
{
    printf("%d/%s/%f",b.book_id,b.title,b.price);
}
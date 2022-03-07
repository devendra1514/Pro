/* WAP to write a content to a file. use fprintf() to write  content  to a file.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    int n1,n2;
    fp=fopen("file3.txt","w");
    printf("Enter two number:");
    scanf("%d%d",&n1,&n2);
    fprintf(fp,"%d %d %d",n1,n2,n1+n2);
    fclose(fp);
    getch();
}
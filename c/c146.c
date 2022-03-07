/* WAP to read content from file and display on the screen. use fscanf() to read content from the file.*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=0,b=0,c=0;
    FILE *fp;
    fp=fopen("file3.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    fscanf(fp,"%d %d %d",&a,&b,&c);
    printf("a=%d,b=%d,a+b=%d",a,b,c);
    fclose(fp);
}
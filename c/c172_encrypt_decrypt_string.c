/* Write a function to encrypt a string and decrypt it and print it */
#include<stdio.h>
#include<conio.h>
void encrypt(char *ptr)
{
    while(*ptr != '\0')
    {
        *ptr=*ptr+1;
        ptr++;
    }
}
void decrypt(char *ptr)
{
    while(*ptr != '\0')
    {
        *ptr=*ptr-1;
        ptr++;
    }
}
void main()
{
    char ch[]="hello world";
    printf("String : %s",ch);
    encrypt(ch);
    printf("\nEncrypt String : %s",ch);
    decrypt(ch);
    printf("\nDecrypt string : %s",ch);
}
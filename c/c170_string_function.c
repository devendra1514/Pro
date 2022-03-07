// 170)Write a program to use string.h function like strlen(), 
// strcpy() , strcap(), strcmp().
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20]="hello",s2[20],s3[20]="hev"; 
    printf("\ns1 = %s",s1);
    printf("\nCharacters in string s1 is %d",strlen(s1));
    printf("\ns2 is empty");
    strcpy(s2,s1);            //s2 now contain "hello" 
    printf("\nCopy of string s1 in s2 %s",s2); 
    printf("\nAddition of s1 and s2 string now s1 is %s",strcat(s1,s2));
    printf("\ns3 = %s",s3);
    printf("\n%d",strcmp(s1,s3)); //compare two string if character are bigger then next string 
                                   //than output is -1 else 1 or if same string then output 0
    printf("\nReverse string : %s",strrev(s1));
}
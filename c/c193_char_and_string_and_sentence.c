//char vs string vs sentence

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[20];
    char str[50];
    scanf("%c",&ch);
    fflush(stdin);
    scanf("%s",&s);
    fflush(stdin);
    scanf("\n");
    scanf("%[^\n]%*c",&str);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",str);
    return 0;
}
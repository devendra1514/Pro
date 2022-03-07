/*The statement: scanf("%[^\n]%*c", s); will not work because the last statement 
  will read a newline character, \n, from the previous line. This can be handled in a 
  variety of ways. One way is to use scanf("\n"); before the last statement.
*/

#include <stdio.h>

int main() {
    char ch[50];
    printf("Enter  : ");
    scanf("%[^\n]%*c",ch);
    printf("%s",ch);
    return 0;
}
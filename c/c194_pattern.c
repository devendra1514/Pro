// 194)WAP to print following pattern:
// Input: 3
// Output:
// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3
#include <stdio.h>

int main() {
    short num, temp;
    printf("Enter a number : ");
    scanf("%hd",&num);
    temp = num;
    short count = 0;
    for(int i = 0; i < (num*2-1); i++) {
        for(int j = 0; j < count; j++) {
            printf("%hd ",temp);
            temp--;
        }
        for(int j = 0; j < (num-count)*2-1; j++) {
            printf("%hd ",temp);
        }
        for(int j = 0; j < count; j++) {
            temp++;
            printf("%hd ",temp);
        }
        if(i < num-1) {
            count++;
        }
        else {
            count--;
        }
        printf("\n");
        
    }
    return 0;
}
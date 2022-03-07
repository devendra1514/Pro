#include <stdio.h>

int isPrime(int num) {
    if(num == 1) {
        return 0;
    }
    else {
        for(int i = 2; i < num && i < 10; i++) {
            printf("Check\n");
            if(num % i == 0 ) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(isPrime(num)) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}
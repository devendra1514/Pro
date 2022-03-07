/* Find its complexity without run the program */

#include <stdio.h>
#include <stdlib.h>
int random(int a) {
    int num;
    num = rand() % (a + 1);
    return num;
}

int fun(int num) {
    if(num <= 0) {
        return 0;
    }
    else {
        int i;
        i = random(num - 1);
        printf("Excuse me\n");
        return fun(i) + fun(num - 1 - i);
    }
}

int main() {
    fun(1);
    return 0;
}
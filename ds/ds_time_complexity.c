#include <stdio.h>

int main() {
    long int count = 0;
    
    for(int i = 0; i < 1000; i++) {
        for(int j = 0 ; j < 1000; j++) {
            for(int k = 0; k < 1000; k++){
                count ++;
            }
        }
    }

    // for(int i = 0; i < 1000; i++) {
    //     for(int j = 0 ; j < 1000; j++) {
    //         count ++;
    //     }
    // }

    // for(int i = 0 ; i < 1000; i++) {
    //     count ++;
    // }
    printf("%ld",count);
    return 0;
}
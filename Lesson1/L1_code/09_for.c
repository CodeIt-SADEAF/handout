/* 
    for loops
*/

#include <stdio.h>

int main() {

    // simple for loop
    for (int i = 0; i < 5; i++) {
        printf("i: %d\n", i);
    }

    // nested for loop
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d  ", i);
        }
        printf("\n");
    }

    // for loop with continue statement
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("Even number\n");
            continue;
        }
        printf("Odd number\n");
    }

    // for loop with break statement
    for (int i = 0; i < 10; i++) {
        printf("i: %d\n", i);
        if (i == 4) {
            break;
        }
    }
    
}   
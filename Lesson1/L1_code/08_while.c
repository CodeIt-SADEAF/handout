/* 
    while, do loops
*/

#include <stdio.h>

int main() {
    int i = 0;
    int j = 1;

    // loop will run 5 times
    // At the 6th time, when i is 5, the program exits from the while loop
    while (i < 5) {
        i++;
        printf("i: %d\n", i);
    }

    // do-while loop runs at least once
    do {
        printf("j: %d\n", j);
        j++;
    }
    while (j <= 5);
}   
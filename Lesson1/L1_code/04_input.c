/* 
    user input
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int myAge;

    // prompt
    printf("What is your age?\n");

    // read
    scanf("%d", &myAge);

    printf("You are %d years old \n", myAge);

    return 0;
}
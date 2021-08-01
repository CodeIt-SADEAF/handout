/* 
    conditionals
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    //-----------------------------
    // basic if-else statements
    int x = 4;
    int y = 2;
    if (x == y) {
        printf("x is equal to y\n");
    }
    else if (x > y) {
        printf("x is greater than y\n"); 
    }
    else if (x == 4) {
        printf("x is equal to 4\n"); 
    }
    else {
        printf("x is less than y\n");
    }

    //-----------------------------
    // Boolean expressions
    x = 2;
    y = 2;
    int z = 4;
    if (x == y && x == z) {
        printf("x is equal to both y and z\n");
    }
    else if (x == y || x == z) {
        printf("x is equal to either y or z\n");
    }
    else {
        printf("x is not equal to y or z\n");
    }

    x = 2;
    y = 3;
    z = 4;
    if (!(x == z || x == y)) {
        printf("x is not equal to y or z\n");
    }
    else {
        printf("x is equal to y or z\n");
    }

    x = 2;
    y = 3;
    z = 4;
    if (!(x == z) && !(x == y)) {
        printf("x is not equal to y or z\n");
    }
    else {
        printf("x is equal to y or z\n");
    }

    //-----------------------------
    // non-zero numbers are interpreted as true
    x = 10;
    if (x) {
        printf("x is nonzero\n");
    }
    else {
        printf("x is zero\n");
    }

    //-----------------------------
    // zero is interpreted as false
    y = 0;
    if (y) {
        printf("y is nonzero\n");
    }
    else {
        printf("y is zero\n");
    }

    // You can test a boolean value directly
    bool test = true; // in order to use the bool type, remember to add #include <stdbool.h> at the start of the file
    if (test) {
        printf("test is true\n");
    }
    else {
        printf("test is false\n");
    }

    return 0;
}   
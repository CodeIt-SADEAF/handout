/* 
    conditionals
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    //-----------------------------
    // basic if-else statements
    int myAge = 40;
    int yourAge = 20;
    if (myAge == yourAge) {
        printf("You are the same age as me\n");
    }
    else if (myAge > yourAge) {
        printf("I am older than you\n"); 
    }
    else if (myAge == 40) {
        printf("I am 40 years old\n"); 
    }
    else {
        printf("I am younger than you\n");
    }

    //-----------------------------
    // Boolean expressions
    myAge = 20;
    yourAge = 20;
    int markAge = 40;
    if (myAge == yourAge && myAge == markAge) {
        printf("Mark, you, and I are of the same age\n");
    }
    else if (myAge == yourAge || myAge == markAge) {
        printf("I am either as old as you or as old as Mark\n");
    }
    else {
        printf("I am neither the same age as you or Mark\n");
    }

    myAge = 20;
    yourAge = 30;
    markAge = 40;
    if (!(myAge == markAge || myAge == yourAge)) {
        printf("I am neither the same age as you or Mark\n");
    }
    else {
        printf("I am either as old as you or as old as Mark\n");
    }

    myAge = 20;
    yourAge = 30;
    markAge = 40;
    if (!(myAge == markAge) && !(myAge == yourAge)) {
        printf("I am neither the same age as you or Mark\n");
    }
    else {
        printf("I am either as old as you or as old as Mark\n");
    }

    //-----------------------------
    // non-zero numbers are interpreted as true
    int x = 10;
    if (x) {
        printf("x is nonzero\n");
    }
    else {
        printf("x is zero\n");
    }

    //-----------------------------
    // zero is interpreted as false
    int y = 0;
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
#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int e;

    e = b * c;
    printf("Ans: %d\n",e);
    
    // modulus
    int f = 6;
    int g = f % 4;
    printf("Ans: %d\n",g);

    // conditionals
    int myAge = 30;
    int yourAge = 40;
    int markAge = 50;
    if (myAge < yourAge && myAge > markAge) {
        printf("one\n");
    }
    else if (myAge < yourAge || myAge > markAge) {
        printf("two\n");
    }
    else {
        printf("three\n");
    }

    int apple_stock = 30;
    int google_stock = 40;
    int fb_stock = 50;
    if (!(google_stock < fb_stock && google_stock > apple_stock)) {
        printf("one\n");
    }
    else if (!(apple_stock > google_stock || apple_stock > fb_stock)) {
        printf("two\n");
    }
    else {
        printf("three\n");
    }


    return 0;
}
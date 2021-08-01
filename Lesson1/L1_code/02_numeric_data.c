/* 
    numeric data types
*/

#include <stdio.h>

int main() {
    
    /* declaring
    Method 1: Declare first, initialise later
    Method 2: Declare and initialise at the same time
    */

    int x;
    long long y = 99999999;
    float a = 4.2;
    double b = 4.2321;

    // assigning
    x = 3;

    // printing numerics
    printf("x: %d\n", x); 
    printf("y: %lld\n", y);

    printf("a: %f\n", a);
    printf("b: %lf\n", b);

    // to specify decimal places: 0.(x)%f or 0.(x)%lf, where x is the number of dp
    printf("a: %0.3f\n", a);
    printf("b: %0.3lf\n", b);

    return 0;
}
/* 
    expressions
*/

#include <stdio.h>

int main() {

    //-----------------------------
    // basic arithmetic
    //-----------------------------
    int a = 1;
    int b = 2;
    int c = 3;
    int e;
    // addition
    e = a + b; // e is 3
    printf("%d\n",e);
    
    // multiplication
    e = b * c; // e is 6
    printf("%d\n",e);
   
    // subtraction
    b = c - a; // b is 2
    printf("%d\n",b); 
    
    // division
    e = e / b; // e is 3 
    printf("%d\n",e);
    
    // modulus
    int f = e % b; // f is 1
    printf("%d\n",f);
    
    //-----------------------------
    // operator precedence
    //-----------------------------
    int x1 = 2;
    int x2 = 3;
    int x3 = 6;
    int x4;
    x4 = x3 * x1 - x3 / x1; // x3 * x1 and x3 / x1 are computed first, then the subtraction is done. x4 is now 9
    printf("%d\n",x4);
    x4 = x2 + x1 - x3; // x2 + x1 is computed first, then the subtraction is done. x4 is now -1
    printf("%d\n",x4);
    x4 = x3 * (x1 - x3); // x1 - x3 is computed first, then the multiplication is done. x4 is now -24
    printf("%d\n",x4);

    //-----------------------------    
    // integer division
    //-----------------------------
    int z;
    int x = 9;
    int y = 2;
    z = x / y;
    printf("%d\n",z); // prints 4, since 9 divided by 2 is 4.5, which is 4 when rounded down

    //-----------------------------
    // regular division
    //-----------------------------
    float p;
    int m = 9;
    int n = 2;
    p = m / (float)n; // cast b to type float
    printf("%f\n",p); // prints 4.5, since b and c are now floats

    //-----------------------------
    // using postfix expressions
    //-----------------------------
    int count = 0;
    count = count + 1; // count is now 1
    count++; // count is now 2
    count--; // count is now 1
    count += 3; // count is now 4
    count -= 2; // count is now 2
    printf("%d\n",count);
}
  
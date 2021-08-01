/* 
    char & bool data types
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    /* Assigning value to char
    Method 1: Use single quotes and specify character
    Method 2: Assign ASCII equivalent
    */

    char c = 'a';
    char d = 65; // 65 is the ASCII code for the character 'A'
    char e = 57; // 57 is the ASCII code for the character '9'

    printf("c: %c\n", c); 
    printf("d: %c\n", d);
    printf("e: %c\n", e);

    //to use bools in C, you have to include <stdbool.h>
    bool isTrue = true;

    //printing bool gives 1 for true or 0 for false
    printf("isTrue: %d\n", isTrue);

    return 0;
}
  


/* 
    variable scope
*/

#include <stdio.h>

int main() {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d  ", i);
        }
        printf("\n");
        j = 9; // this variable is out of scope. You will not be able to compile and run your program
    }

    
}  
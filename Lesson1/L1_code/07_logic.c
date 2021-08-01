/* 
    logical operators
*/

#include <stdio.h>

int main() {
    int yourAge;
    int jamesAge;
    int markAge = 18;

    printf("Your age: ");
    scanf("%d", &yourAge);
    printf("James' age: ");
    scanf("%d", &jamesAge);

    if (yourAge == markAge && yourAge == jamesAge) {
        printf("You are the same age as Mark and James\n");
    }
    else if (yourAge == jamesAge || yourAge == markAge){
        printf("You are the same age as Mark or James\n"); 
    }
    else if (yourAge != markAge && yourAge != jamesAge) {
        printf("You are not Mark's or James' age\n"); 
    }
    return 0;
}   

    

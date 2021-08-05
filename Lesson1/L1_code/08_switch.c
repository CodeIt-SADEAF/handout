/* 
    switch
*/

#include <stdio.h>

int main() {
    int option;

    // prompt
    printf("You make a call to DBS customer hotline.\n");
    printf("Ring ring...\n");
    printf("Welcome. Please select from the following numbers: \n\n");
    printf("0. Speak to a customer service officer\n");
    printf("1. Check Recent transactions\n");
    printf("2. Check Account Balance\n");
    printf("3. Report Lost Card\n");
    printf("4. Savings and Investments\n");
    printf("5. Apply for a bank loan\n");
    printf("Key in the number of your choice: ");

    // read
    scanf("%d", &option);

    // if statements
    if (option == 0)
        printf("You chose option 0\n");
    else if (option == 1)
        printf("You chose option 1\n");
    else if (option == 2)
        printf("You chose option 2\n");
    else if (option == 3)
        printf("You chose option 3\n");
    else if (option == 4)
        printf("You chose option 4\n");
    else if (option == 5)
        printf("You chose option 5\n");
    else
        printf("Invalid option chosen!\n");


    printf("\nMake the choice again\n");
    printf("Key in the number of your choice: ");

    // read
    scanf("%d", &option);

    // switch statements
    switch (option)
    {
        case 0:
            printf("You chose option 0\n");
            break;
        case 1:
            printf("You chose option 1\n");
            break;
        case 2:
            printf("You chose option 2\n");
            break;
        case 3:
            printf("You chose option 3\n");
            break;
        case 4:
            printf("You chose option 4\n");
            break;
        case 5:
            printf("You chose option 5\n");
            break;
        default:
            printf("Invalid option chosen!\n");
    }
    
    return 0;
}
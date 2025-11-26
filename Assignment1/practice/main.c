// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int correctPin = 1234;
//     int userPin;
//     printf("Please input your PIN\n");
//     scanf("%d", &userPin);
//     if (userPin==correctPin){
//         printf("Access granted");
//     } else{
//         printf("Access denied");
//     };
    
// }
#include <stdio.h>
#include <string.h>
int main(){
    char pin[10];
    // char correctPin[]="1234";


    printf("Enter your pin: ");
    scanf("%s", pin); 
    int length =strlen(pin);

    if (length>4){
        printf("Pin is too long(Must be 4 digits)");
    }
    else if (length<4){
        printf("Pin is too short(must be 4 digits)");
    }
    else{    
        if (strcmp(pin,"1234")==0){
         printf("Access granted");
        } else{
         printf("Access denied");
        };
    }
    int choice;

    printf("\nChoose an option:\n");
    printf("\n1. Open Door\n");
    printf("\n2. Change Username\n");
    printf("\n3. Change PIN\n");
    printf("\n4. Exit\n");
    printf("\nEnter your choice: \n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Door is already open.");
            break;
        case 2:
            printf("Change username feature coming soon.");
            break;
        case 3:
            printf("Change PIN feature coming soon.");
            break;
        case 4:
            printf("Exiting system.");
            break;
        default:
            printf("Invalid option! Please try again.");
    }

    return 0;
     
}
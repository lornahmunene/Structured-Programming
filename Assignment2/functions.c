// operations.c
#include <stdio.h>
#include "functions.h"

int balance = 0;  // global balance

int checkBalance() {
    printf("\nYour balance is: %d\n", balance);
    return balance;
}

int deposit() {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    balance += amount;
    printf("Successful deposit of: %d\n", amount);

    return balance;
}

int withdraw() {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    balance -= amount;
    printf("You've withdrawn: %d\n", amount);

    return balance;
}

int display() {
    int choice;

    printf("\nChoose an option:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        case 1: checkBalance(); break;
        case 2: deposit(); break;
        case 3: withdraw(); break;
        case 4: 
            printf("Exiting system.\n");
            return 0;
        default: 
            printf("Invalid option! Please try again.\n");
    }

    return 1;  // continue running
}

// login.c
#include <stdio.h>
#include <string.h>
#include "login.h"

int login() {
    char pin[10];

    printf("Enter your pin: ");
    scanf("%s", pin);

    int length = strlen(pin);

    if (length > 4) {
        printf("Pin is too long (must be 4 digits)\n");
    } else if (length < 4) {
        printf("Pin is too short (must be 4 digits)\n");
    } else {
        if (strcmp(pin, "1234") == 0) {
            printf("Access granted\n");
            return 1;
        } else {
            printf("Access denied\n");
            return 0;
        }
    }

    return 0;
}

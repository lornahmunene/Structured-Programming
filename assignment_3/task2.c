/*
 * Task 2: Display Address of a Variable
 * Objective: Understand the difference between a variable and a pointer,
 *            and how pointers store and access memory addresses.
 */

#include <stdio.h>

int main() {
    // Declare an integer variable and assign a value
    int num = 10;
    
    // Declare an integer pointer
    int *ptr;
    
    // Store the address of num in the pointer ptr
    ptr = &num;
    
    // Print the required information
    printf("=== Task 2: Display Address of a Variable ===\n\n");
    
    printf("Value of num:                    %d\n", num);
    printf("Address of num:                  %p\n", (void*)&num);
    printf("\n");
    printf("Value stored in ptr:             %p\n", (void*)ptr);
    printf("Value accessed using *ptr:       %d\n", *ptr);
    printf("\n");
    
    // Additional information for better understanding
    printf("Address of ptr itself:           %p\n", (void*)&ptr);
    printf("\n");
    
    // Verification that ptr points to num
    printf("Verification:\n");
    printf("Does ptr point to num? ");
    if (ptr == &num) {
        printf("YES - ptr stores the address of num\n");
    } else {
        printf("NO\n");
    }
    
    printf("Does *ptr equal num? ");
    if (*ptr == num) {
        printf("YES - dereferencing ptr gives us the value of num\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
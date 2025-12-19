/*
 * Task 3: Access Variable Value Using Pointer
 * Objective: Learn pointer dereferencing and value modification using pointers.
 */

#include <stdio.h>

int main() {
    // Declare an integer variable and assign an initial value
    int count = 10;
    
    // Declare an integer pointer
    int *pCount;
    
    // Assign the address of count to pCount
    pCount = &count;
    
    printf("=== Task 3: Access Variable Value Using Pointer ===\n\n");
    
    // Display initial values
    printf("Initial value of count:          %d\n", count);
    printf("Address of count:                %p\n", (void*)&count);
    printf("Value of pCount (address):       %p\n", (void*)pCount);
    printf("Value accessed using *pCount:    %d\n", *pCount);
    printf("\n");
    
    // Modify the value of count using the pointer pCount
    printf("Modifying count using pointer...\n");
    *pCount = 25;  // Dereferencing pCount to modify count
    printf("New value assigned via pointer:  25\n\n");
    
    // Print the updated value of count
    printf("Updated value of count:          %d\n", count);
    printf("Value accessed using *pCount:    %d\n", *pCount);
    printf("\n");
    
    // Demonstrate another modification
    printf("Making another modification...\n");
    *pCount = *pCount + 15;  // Increment by 15 using pointer
    printf("Added 15 to count using pointer\n\n");
    
    printf("Final value of count:            %d\n", count);
    printf("Value accessed using *pCount:    %d\n", *pCount);
    
    return 0;
}
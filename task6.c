/*
 * Task 6: Pass by Value vs Pass by Reference
 * Objective: Understand the difference between pass by value and 
 *            pass by reference when calling functions.
 */

#include <stdio.h>

// Function declarations
void incrementByValue(int x);
void incrementByReference(int *x);

int main() {
    int number;
    
    printf("=== Task 6: Pass by Value vs Pass by Reference ===\n\n");
    
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("\n");
    
    // Demonstrate Pass by Value
    printf("============================================\n");
    printf("DEMONSTRATION 1: Pass by Value\n");
    printf("============================================\n");
    printf("Original value:       %d\n", number);
    printf("Calling incrementByValue(%d)...\n", number);
    incrementByValue(number);
    printf("After function call:  %d\n", number);
    printf("Result: Value REMAINS UNCHANGED\n\n");
    
    // Demonstrate Pass by Reference
    printf("============================================\n");
    printf("DEMONSTRATION 2: Pass by Reference\n");
    printf("============================================\n");
    printf("Current value:        %d\n", number);
    printf("Calling incrementByReference(&%d)...\n", number);
    incrementByReference(&number);
    printf("After function call:  %d\n", number);
    printf("Result: Value WAS MODIFIED\n\n");
    
    // Summary
    printf("============================================\n");
    printf("SUMMARY\n");
    printf("============================================\n");
    printf("Pass by Value:\n");
    printf("  - Function receives a COPY of the value\n");
    printf("  - Changes inside function DON'T affect original\n");
    printf("  - Original variable is PROTECTED\n\n");
    
    printf("Pass by Reference:\n");
    printf("  - Function receives the ADDRESS of the variable\n");
    printf("  - Changes inside function DO affect original\n");
    printf("  - Original variable CAN BE MODIFIED\n");
    
    return 0;
}

/*
 * Function: incrementByValue
 * Description: Increments a number using pass by value
 * Parameters: int x (copy of the value)
 * Returns: void
 * Effect: Original variable remains unchanged
 */
void incrementByValue(int x) {
    printf("\n  Inside incrementByValue:\n");
    printf("  Received value: %d\n", x);
    printf("  Address of local copy: %p\n", (void*)&x);
    
    x = x + 1;  // Modifies only the local copy
    
    printf("  After increment: %d\n", x);
    printf("  (This is a local copy, original is unaffected)\n\n");
}

/*
 * Function: incrementByReference
 * Description: Increments a number using pass by reference
 * Parameters: int *x (pointer to the original variable)
 * Returns: void
 * Effect: Original variable is modified
 */
void incrementByReference(int *x) {
    printf("\n  Inside incrementByReference:\n");
    printf("  Received address: %p\n", (void*)x);
    printf("  Value at address: %d\n", *x);
    
    *x = *x + 1;  // Modifies the original variable via pointer
    
    printf("  After increment: %d\n", *x);
    printf("  (Original variable was modified)\n\n");
}
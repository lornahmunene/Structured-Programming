/*
 * Task 5: Swap Two Numbers Using Pointers
 * Objective: Understand pass by reference using pointers and functions.
 */

#include <stdio.h>

// Function declaration
void swapNumbers(int *x, int *y);

int main() {
    // Declare two integer variables
    int a, b;
    
    printf("=== Task 5: Swap Two Numbers Using Pointers ===\n\n");
    
    // Get input from user
    printf("Enter value for a: ");
    scanf("%d", &a);
    
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("\n");
    
    // Print the values before swapping
    printf("Before swapping:\n");
    printf("a = %d (at address %p)\n", a, (void*)&a);
    printf("b = %d (at address %p)\n", b, (void*)&b);
    printf("\n");
    
    // Call swapNumbers() by passing the addresses of a and b
    printf("Calling swapNumbers(&a, &b)...\n\n");
    swapNumbers(&a, &b);
    
    // Print the values after swapping
    printf("After swapping:\n");
    printf("a = %d (at address %p)\n", a, (void*)&a);
    printf("b = %d (at address %p)\n", b, (void*)&b);
    
    return 0;
}

/*
 * Function: swapNumbers
 * Description: Swaps the values of two integers using pointers
 * Parameters: 
 *   - int *x: pointer to first integer
 *   - int *y: pointer to second integer
 * Returns: void
 */
void swapNumbers(int *x, int *y) {
    printf("Inside swapNumbers function:\n");
    printf("  Received address x: %p (contains value %d)\n", (void*)x, *x);
    printf("  Received address y: %p (contains value %d)\n", (void*)y, *y);
    
    // Create a temporary variable to hold one value during swap
    int temp;
    
    // Swap the values using dereferencing
    temp = *x;    // Store value at address x in temp
    *x = *y;      // Store value at address y in location pointed by x
    *y = temp;    // Store temp value in location pointed by y
    
    printf("  After swapping: *x = %d, *y = %d\n\n", *x, *y);
}
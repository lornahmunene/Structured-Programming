/*
 * Task 4: Add Two Numbers Using Pointers
 * Objective: Perform arithmetic operations using pointer dereferencing.
 */

#include <stdio.h>

int main() {
    // Declare two integer variables
    int num1, num2;
    
    // Declare two integer pointers
    int *ptr1, *ptr2;
    
    printf("=== Task 4: Add Two Numbers Using Pointers ===\n\n");
    
    // Get input from user
    printf("Enter first number:  ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\n");
    
    // Assign the address of num1 to ptr1
    ptr1 = &num1;
    
    // Assign the address of num2 to ptr2
    ptr2 = &num2;
    
    // Display the values and addresses
    printf("Memory Layout:\n");
    printf("num1 = %d (at address %p)\n", num1, (void*)&num1);
    printf("num2 = %d (at address %p)\n", num2, (void*)&num2);
    printf("\n");
    
    printf("Pointer Information:\n");
    printf("ptr1 points to: %p (contains value %d)\n", (void*)ptr1, *ptr1);
    printf("ptr2 points to: %p (contains value %d)\n", (void*)ptr2, *ptr2);
    printf("\n");
    
    // Add the values of num1 and num2 using pointer dereferencing
    int sum = *ptr1 + *ptr2;
    
    // Print the result
    printf("Addition using pointer dereferencing:\n");
    printf("*ptr1 + *ptr2 = %d + %d = %d\n", *ptr1, *ptr2, sum);
    printf("\nThe sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}
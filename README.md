# Assignment 3: Variables, Pointers & Functions
## EEC 2202: Structured Programming

---

## Task 1: Pointer Concepts - Short Notes

### 1. Difference Between Normal Variables and Pointers

**Normal Variable:**
- A normal variable stores an actual data value (e.g., an integer, character, or float)
- It directly holds the data you want to work with
- Memory access: Direct - you access the value immediately
- Reading value: Simply use the variable name (e.g., `x` gives you the value stored in x)
- Modifying value: Direct assignment (e.g., `x = 20;`)

**Pointer:**
- A pointer stores a memory address (location) of another variable
- It indirectly points to where the actual data is stored
- Memory access: Indirect - you first go to the address, then access the value
- Reading value: Use the dereference operator `*` (e.g., `*ptr` gives you the value at the address)
- Modifying value: Use dereferencing with assignment (e.g., `*ptr = 20;`)

**Example:**
```c
int num = 10;      // Normal variable: stores value 10
int *ptr = &num;   // Pointer: stores the address of num
```

---

### 2. Variable vs Pointer Declaration and Definition

**Variable Declaration and Definition:**
```c
int count;         // Declaration: tells compiler about variable type and name
count = 25;        // Definition: assigns a value to the variable
int age = 30;      // Declaration + Definition in one line
```

**Pointer Declaration and Definition:**
```c
int *ptr;          // Declaration: * indicates it's a pointer to an int
ptr = &count;      // Definition: & gets the address of count
int *pAge = &age;  // Declaration + Definition in one line
```

**Role of Operators:**
- `*` (asterisk):
  - In declaration: Indicates the variable is a pointer (e.g., `int *ptr`)
  - In usage: Dereferences the pointer to access the value (e.g., `*ptr`)
  
- `&` (ampersand):
  - Gets the address of a variable (e.g., `&count` returns the memory address of count)
  - Used to assign addresses to pointers

**Example:**
```c
int x = 100;       // Variable declaration and definition
int *p;            // Pointer declaration
p = &x;            // Pointer definition (assign address of x to p)
printf("%d", *p);  // Output: 100 (dereference p to get value at address)
```

---

### 3. Dereferencing a Pointer

**Dereferencing** means accessing the value stored at the memory address that a pointer holds. You use the `*` operator to dereference.

**How it works:**
1. Pointer stores an address
2. Dereferencing (`*pointer`) follows that address to get the actual value
3. You can read or modify the value using dereferencing

**Example:**
```c
int score = 85;
int *pScore = &score;

// Reading value through dereferencing
printf("Value: %d\n", *pScore);  // Output: 85

// Modifying value through dereferencing
*pScore = 95;  // Changes score from 85 to 95
printf("Updated value: %d\n", score);  // Output: 95
```

**Visualization:**
```
Memory:
Address    Variable    Value
0x1000     score       85  ──┐
0x2000     pScore      0x1000 ─┘

*pScore means: "Go to address 0x1000 and get the value there" → 85
```

---

### 4. Scenarios Where Pointers Are Preferred

**Use Case 1: Dynamic Memory Allocation**
When you need to allocate memory at runtime based on user input or program requirements.

```c
// Example: Creating an array of unknown size at runtime
int n;
printf("Enter number of students: ");
scanf("%d", &n);

int *grades = (int *)malloc(n * sizeof(int));  // Dynamic allocation
// Use the array...
free(grades);  // Free memory when done
```

**Use Case 2: Efficient Function Parameter Passing**
When passing large structures or arrays to functions, pointers avoid copying entire data.

```c
struct Student {
    char name[50];
    int grades[10];
    // Large structure
};

// Without pointer: copies entire structure (slow)
void processStudent(struct Student s) { /* ... */ }

// With pointer: passes only address (fast)
void processStudentPtr(struct Student *s) { /* ... */ }
```

**Use Case 3: Returning Multiple Values from a Function**
Functions can only return one value directly, but with pointers, you can modify multiple values.

```c
void getMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}
```

**Use Case 4: Array and String Manipulation**
Pointers are essential for efficient array traversal and string operations.

```c
void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
```

---

### 5. Limitations and Risks of Using Pointers

**1. Segmentation Faults / Memory Errors:**
- Accessing invalid memory addresses causes program crashes
```c
int *ptr;  // Uninitialized pointer (points to random address)
*ptr = 10; // CRASH: Writing to unknown memory location
```

**2. Memory Leaks:**
- Forgetting to free dynamically allocated memory wastes system resources
```c
int *arr = (int *)malloc(100 * sizeof(int));
// ... use array ...
// Forgot to call free(arr); → Memory leak
```

**3. Dangling Pointers:**
- Pointers that point to freed or deallocated memory
```c
int *ptr = (int *)malloc(sizeof(int));
free(ptr);
*ptr = 20;  // DANGER: Accessing freed memory
```

**4. Pointer Arithmetic Errors:**
- Incorrect calculations can access wrong memory locations
```c
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;
ptr = ptr + 10;  // Points beyond array bounds
printf("%d", *ptr);  // Undefined behavior
```

**5. Complexity and Debugging Difficulty:**
- Pointers make code harder to understand and debug
- Multiple pointers to same location can cause unexpected modifications
- NULL pointer dereferencing crashes programs

**6. No Bounds Checking:**
- Unlike arrays in some languages, C pointers don't check if you're accessing valid memory
- Buffer overflow vulnerabilities can be exploited for security attacks

---

### 6. Call by Value vs Call by Reference

**Call by Value:**
- A copy of the actual value is passed to the function
- Changes made inside the function do NOT affect the original variable
- Function works with a local copy

```c
void incrementByValue(int x) {
    x = x + 1;  // Only modifies local copy
    printf("Inside function: %d\n", x);
}

int main() {
    int num = 10;
    incrementByValue(num);  // Passes copy of num
    printf("After function: %d\n", num);  // Output: 10 (unchanged)
    return 0;
}
```

**Call by Reference:**
- The address (reference) of the variable is passed to the function
- Changes made inside the function DO affect the original variable
- Function works with the actual variable through its address

```c
void incrementByReference(int *x) {
    *x = *x + 1;  // Modifies original variable
    printf("Inside function: %d\n", *x);
}

int main() {
    int num = 10;
    incrementByReference(&num);  // Passes address of num
    printf("After function: %d\n", num);  // Output: 11 (changed)
    return 0;
}
```

**Key Differences:**

| Aspect | Call by Value | Call by Reference |
|--------|---------------|-------------------|
| What is passed | Copy of value | Address of variable |
| Original variable | Unchanged | Can be changed |
| Memory usage | More (creates copy) | Less (only address) |
| Safety | Safer (original protected) | Riskier (can modify original) |
| Syntax | `func(x)` | `func(&x)` |

---

### 7. Practical Scenarios for Each Calling Method

**A. When Call by Value is Preferred:**

**Scenario 1: Read-only Operations**
When you only need to use a value without modifying it.
```c
int calculateSquare(int num) {
    return num * num;  // Don't need to change original num
}
```

**Scenario 2: Protecting Original Data**
When you want to ensure the original variable remains unchanged.
```c
void displayGrade(int score) {
    if (score >= 90) printf("A");
    else if (score >= 80) printf("B");
    // Original score should not be modified
}
```

**Scenario 3: Small Data Types**
When passing simple data types (int, char, float) - copying is efficient.
```c
float calculateInterest(float principal, float rate, int time) {
    return (principal * rate * time) / 100;
}
```

**B. When Call by Reference is Preferred:**

**Scenario 1: Modifying Multiple Values**
When a function needs to return multiple values or modify input variables.
```c
void solveQuadratic(float a, float b, float c, float *root1, float *root2) {
    float discriminant = b*b - 4*a*c;
    *root1 = (-b + sqrt(discriminant)) / (2*a);
    *root2 = (-b - sqrt(discriminant)) / (2*a);
}
```

**Scenario 2: Large Data Structures**
When passing large arrays or structures to avoid costly copying.
```c
void processImage(unsigned char *image, int width, int height) {
    // Process millions of pixels efficiently
    // Copying would waste time and memory
}
```

**Scenario 3: Swapping Values**
When two variables need to exchange values.
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

**Scenario 4: Dynamic Memory Management**
When working with dynamically allocated memory.
```c
void initializeArray(int **arr, int size) {
    *arr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        (*arr)[i] = 0;
    }
}
```

---

## Compilation and Execution

To compile and run the programs in this assignment:

```bash
# Compile a specific task
gcc task2.c -o task2
./task2

# Compile all tasks
gcc task2.c -o task2
gcc task3.c -o task3
gcc task4.c -o task4
gcc task5.c -o task5
gcc task6.c -o task6

# Run each program
./task2
./task3
./task4
./task5
./task6
```

---

## Repository Structure

```
Assignment3/
├── README.md       (This file - theoretical explanations)
├── task2.c         (Display address of a variable)
├── task3.c         (Access variable value using pointer)
├── task4.c         (Add two numbers using pointers)
├── task5.c         (Swap two numbers using pointers)
└── task6.c         (Pass by value vs pass by reference)
```

---

## Author
[Your Name]
[Your Registration Number]

## Course
EEC 2202: Structured Programming
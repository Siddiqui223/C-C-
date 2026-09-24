/*
 * TOPIC: Functions in C
 * --------------------------
 * A function is a reusable block of code that performs a specific task.
 * Benefits: avoids repeating code, makes programs organized and readable.
 *
 * Structure: returnType functionName(parameters) { body }
 */

#include <stdio.h>

// ---- Function Prototype (Declaration) ----
// Tells the compiler this function exists before main() uses it
int add(int a, int b);
void greet(void);

int main() {
    // ---- Calling a function that returns a value ----
    int result = add(5, 7);
    printf("Sum = %d\n", result);

    // ---- Calling a function that returns nothing (void) ----
    greet();

    return 0;
}

// ---- Function Definition: actual code that runs ----
// This function takes two integers and RETURNS their sum
int add(int a, int b) {
    int sum = a + b;
    return sum;   // sends the result back to where the function was called
}

// This function has no return value (void) and no parameters
void greet(void) {
    printf("Hello from the greet() function!\n");
}

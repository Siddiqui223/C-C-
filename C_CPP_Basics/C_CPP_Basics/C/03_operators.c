/*
 * TOPIC: Operators in C
 * -----------------------
 * Operators are symbols that perform operations on variables/values.
 * Categories covered here: Arithmetic, Relational, Logical, Assignment,
 * Increment/Decrement.
 */

#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // ---- Arithmetic Operators: + - * / % ----
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);   // Addition
    printf("a - b = %d\n", a - b);   // Subtraction
    printf("a * b = %d\n", a * b);   // Multiplication
    printf("a / b = %d\n", a / b);   // Integer Division (decimal part is dropped)
    printf("a %% b = %d\n", a % b);  // Modulus -> gives the REMAINDER of division

    // ---- Relational Operators: compare two values, result is 0(false) or 1(true) ----
    printf("\nRelational Operators:\n");
    printf("a == b : %d\n", a == b);  // equal to
    printf("a != b : %d\n", a != b);  // not equal to
    printf("a > b  : %d\n", a > b);   // greater than
    printf("a < b  : %d\n", a < b);   // less than

    // ---- Logical Operators: combine multiple conditions ----
    printf("\nLogical Operators:\n");
    printf("(a>5 && b>1) : %d\n", (a > 5 && b > 1)); // AND -> true only if BOTH true
    printf("(a>5 || b>10): %d\n", (a > 5 || b > 10));// OR  -> true if AT LEAST ONE true
    printf("!(a>5)       : %d\n", !(a > 5));         // NOT -> reverses the result

    // ---- Assignment Operators: shortcuts to update a variable ----
    int c = 5;
    c += 2;  // same as c = c + 2
    printf("\nc after += 2: %d\n", c);

    // ---- Increment / Decrement Operators ----
    int x = 5;
    int postValue = x++;   // post-increment: use x's OLD value first, THEN increment
    printf("\nx++ (post-increment) gave: %d, and now x = %d\n", postValue, x);
    int y = 5;
    printf("++y (pre-increment) gives: %d\n", ++y);

    return 0;
}

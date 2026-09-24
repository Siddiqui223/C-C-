/*
 * TOPIC: Variables and Data Types in C
 * -------------------------------------
 * A variable is a named location in memory used to store a value.
 * C is a "statically typed" language, so every variable must have a
 * data type declared before it is used.
 */

#include <stdio.h>

int main() {
    // ---- Basic Data Types ----
    int age = 21;              // int   -> stores whole numbers (no decimals)
    float height = 5.9f;       // float -> stores decimal numbers (single precision)
    double pi = 3.14159265;    // double-> stores decimal numbers (double precision, more accurate)
    char grade = 'A';          // char  -> stores a SINGLE character (in single quotes)

    // ---- Printing variables using printf ----
    // %d -> integer, %f -> float/double, %c -> character
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);   // .1 means show 1 digit after decimal
    printf("Pi: %.5lf\n", pi);          // lf is used for double
    printf("Grade: %c\n", grade);

    // ---- sizeof() operator tells us how many bytes a type occupies ----
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));

    return 0;
}

/*
 * TOPIC: Arrays in C
 * ----------------------
 * An array is a collection of elements of the SAME data type,
 * stored in CONTIGUOUS (back-to-back) memory locations.
 * Index starts from 0.
 */

#include <stdio.h>

int main() {
    // ---- 1D Array Declaration and Initialization ----
    int numbers[5] = {10, 20, 30, 40, 50};  // array of 5 integers

    // ---- Accessing elements using index ----
    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);

    // ---- Modifying an element ----
    numbers[1] = 99;   // changes 20 to 99

    // ---- Traversing (looping through) an array ----
    printf("\nAll elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // ---- 2D Array (like a table with rows and columns) ----
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\n2D Array (Matrix):\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}

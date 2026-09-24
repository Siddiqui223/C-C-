/*
 * TOPIC: Pointers in C
 * -------------------------
 * A pointer is a variable that stores the MEMORY ADDRESS of another
 * variable, instead of storing a value directly.
 *
 * &  -> "address-of" operator: gets the address of a variable
 * *  -> "dereference" operator: gets the value stored at an address
 */

#include <stdio.h>

int main() {
    int num = 25;
    int *ptr = &num;   // ptr now stores the ADDRESS of num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value stored in ptr (address): %p\n", (void*)ptr);
    printf("Value pointed to by ptr (*ptr): %d\n", *ptr);  // dereferencing

    // ---- Changing value through the pointer ----
    *ptr = 50;   // this changes 'num' too, since ptr points to num's address
    printf("\nAfter *ptr = 50, num becomes: %d\n", num);

    // ---- Pointers and Arrays ----
    // The array name itself acts like a pointer to its first element
    int arr[3] = {10, 20, 30};
    int *arrPtr = arr;   // same as &arr[0]

    printf("\nUsing pointer to traverse array:\n");
    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i, *(arrPtr + i));  // pointer arithmetic
    }

    return 0;
}

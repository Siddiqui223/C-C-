/*
 * TOPIC: Input and Output in C
 * -------------------------------
 * printf() -> used to print (output) data to the screen
 * scanf()  -> used to read (input) data typed by the user
 *
 * NOTE: scanf() needs the ADDRESS of the variable, that's why
 *       we use the & (address-of) operator before variable names.
 */

#include <stdio.h>

int main() {
    int age;
    float marks;
    char initial;

    // Taking integer input
    printf("Enter your age: ");
    scanf("%d", &age);              // & gives the memory address of 'age'

    // Taking float input
    printf("Enter your marks: ");
    scanf("%f", &marks);

    // Taking a single character input
    printf("Enter your first name's initial: ");
    scanf(" %c", &initial);         // space before %c skips leftover newline character

    // Displaying the collected data back to the user
    printf("\n--- Your Details ---\n");
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Initial: %c\n", initial);

    return 0;
}

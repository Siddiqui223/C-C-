/*
 * TOPIC: Strings in C
 * -----------------------
 * In C, a string is simply an array of characters ending with a
 * special NULL character '\0' which marks the end of the string.
 * The <string.h> library gives us useful functions to work with strings.
 */

#include <stdio.h>
#include <string.h>   // needed for strlen, strcpy, strcat, strcmp

int main() {
    // ---- Declaring and initializing a string ----
    char name[20] = "Alice";   // C automatically adds '\0' at the end

    printf("Name: %s\n", name);          // %s is used to print strings

    // ---- strlen(): finds the length of the string (excluding '\0') ----
    printf("Length of name: %lu\n", strlen(name));

    // ---- strcpy(): copies one string into another ----
    char copy[20];
    strcpy(copy, name);
    printf("Copied string: %s\n", copy);

    // ---- strcat(): concatenates (joins) two strings ----
    char greeting[30] = "Hello, ";
    strcat(greeting, name);      // Hello,  + Alice = Hello, Alice
    printf("Greeting: %s\n", greeting);

    // ---- strcmp(): compares two strings ----
    // returns 0 if equal, a non-zero value if different
    if (strcmp(name, "Alice") == 0) {
        printf("Names match!\n");
    } else {
        printf("Names do not match.\n");
    }

    return 0;
}

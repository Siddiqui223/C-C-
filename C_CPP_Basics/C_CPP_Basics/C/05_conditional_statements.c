/*
 * TOPIC: Conditional Statements (Decision Making) in C
 * --------------------------------------------------------
 * Used to execute different blocks of code based on conditions.
 * Covered: if, if-else, else-if ladder, switch-case
 */

#include <stdio.h>

int main() {
    int number = 15;

    // ---- Simple if ----
    if (number > 0) {
        printf("%d is positive.\n", number);
    }

    // ---- if-else ----
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    // ---- else-if ladder: checks multiple conditions in order ----
    int marks = 72;
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 75) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C\n");   // this condition matches for marks = 72
    } else {
        printf("Grade: F\n");
    }

    // ---- switch-case: good for checking one variable against many fixed values ----
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;              // break exits the switch, without it code "falls through"
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:                // runs if no case matches
            printf("Invalid day\n");
    }

    return 0;
}

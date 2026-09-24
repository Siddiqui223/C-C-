/*
 * TOPIC: Loops in C
 * --------------------
 * Loops let us repeat a block of code multiple times.
 * Covered: for loop, while loop, do-while loop, break, continue
 */

#include <stdio.h>

int main() {
    // ---- for loop: best when you know how many times to repeat ----
    printf("For loop (1 to 5):\n");
    for (int i = 1; i <= 5; i++) {     // init; condition; update
        printf("%d ", i);
    }
    printf("\n");

    // ---- while loop: repeats WHILE a condition is true ----
    printf("\nWhile loop (5 to 1):\n");
    int j = 5;
    while (j >= 1) {
        printf("%d ", j);
        j--;                            // must update, else infinite loop!
    }
    printf("\n");

    // ---- do-while loop: runs the body AT LEAST ONCE, then checks condition ----
    printf("\nDo-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 3);
    printf("\n");

    // ---- break: exits the loop immediately ----
    printf("\nBreak example (stop at 4):\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 4) {
            break;                       // loop stops completely here
        }
        printf("%d ", i);
    }
    printf("\n");

    // ---- continue: skips the CURRENT iteration only, loop continues ----
    printf("\nContinue example (skip 3):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;                    // skips printf below for i=3
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

/*
 * TOPIC: Hello World - Basic structure of a C program
 * --------------------------------------------------
 * Every C program needs:
 *   1. Header files (using #include) - gives us access to library functions
 *   2. A main() function - this is where program execution STARTS
 *   3. Statements ending with semicolons ;
 *   4. A return statement - tells the OS the program finished
 */

#include <stdio.h>   // stdio.h = Standard Input Output header, needed for printf()

int main() {
    // printf() is used to print text to the screen (console)
    // \n means "new line" - moves the cursor to the next line
    printf("Hello, World!\n");
    printf("Welcome to C programming.\n");

    return 0;   // 0 means the program ended successfully (no errors)
}

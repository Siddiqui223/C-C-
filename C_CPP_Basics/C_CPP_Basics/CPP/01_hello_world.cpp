/*
 * TOPIC: Hello World - Basic structure of a C++ program
 * -----------------------------------------------------
 * Every C++ program needs:
 *   1. Header files (#include) - e.g. <iostream> for input/output
 *   2. "using namespace std;" - lets us use cout/cin without std:: prefix
 *   3. A main() function - program execution starts here
 *   4. A return statement at the end
 */

#include <iostream>      // iostream = Input/Output Stream, needed for cout/cin
using namespace std;     // avoids having to write std::cout every time

int main() {
    // cout (character output) prints to the screen
    // << is the "insertion operator", it sends data into cout
    // endl moves to a new line (similar to \n)
    cout << "Hello, World!" << endl;
    cout << "Welcome to C++ programming." << endl;

    return 0;   // 0 = program ended successfully
}

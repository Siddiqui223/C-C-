/*
 * TOPIC: Functions in C++
 * -----------------------------
 * Same basic idea as C, but C++ adds two powerful features:
 *   1. Default Arguments - a parameter can have a default value
 *   2. Function Overloading - multiple functions with the SAME name
 *      but DIFFERENT parameters
 */

#include <iostream>
using namespace std;

// ---- Basic function ----
int add(int a, int b) {
    return a + b;
}

// ---- Function with a DEFAULT argument ----
// If the caller doesn't provide 'tax', it defaults to 5
double calculatePrice(double price, double tax = 5.0) {
    return price + (price * tax / 100);
}

// ---- Function Overloading: same name "multiply", different parameters ----
int multiply(int a, int b) {
    return a * b;
}
double multiply(double a, double b) {   // overload for decimal numbers
    return a * b;
}

int main() {
    // ---- Calling basic function ----
    cout << "Sum: " << add(5, 7) << endl;

    // ---- Calling function with default argument ----
    cout << "Price with default tax: " << calculatePrice(100) << endl;      // uses tax = 5.0
    cout << "Price with custom tax: " << calculatePrice(100, 18) << endl;   // uses tax = 18

    // ---- Calling overloaded functions ----
    cout << "Multiply ints: " << multiply(4, 5) << endl;       // calls int version
    cout << "Multiply doubles: " << multiply(2.5, 3.0) << endl; // calls double version

    return 0;
}

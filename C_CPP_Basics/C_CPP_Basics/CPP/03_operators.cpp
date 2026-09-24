/*
 * TOPIC: Operators in C++
 * ---------------------------
 * Same categories as C: Arithmetic, Relational, Logical,
 * Assignment, Increment/Decrement. C++ uses cout for display.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // ---- Arithmetic Operators ----
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;   // integer division
    cout << "a % b = " << (a % b) << endl;   // remainder

    // ---- Relational Operators (result is true/false, shown as 1/0) ----
    cout << "\nRelational Operators:" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a > b  : " << (a > b) << endl;

    // ---- Logical Operators ----
    cout << "\nLogical Operators:" << endl;
    cout << "(a>5 && b>1): " << (a > 5 && b > 1) << endl;  // AND
    cout << "(a>5 || b>10): " << (a > 5 || b > 10) << endl; // OR
    cout << "!(a>5): " << !(a > 5) << endl;                 // NOT

    // ---- Assignment Operators ----
    int c = 5;
    c += 2;   // same as c = c + 2
    cout << "\nc after += 2: " << c << endl;

    // ---- Increment / Decrement ----
    int x = 5;
    int postValue = x++;   // post-increment: use x's OLD value first, THEN increment
    cout << "\nx++ gave: " << postValue << ", then x became: " << x << endl;

    return 0;
}

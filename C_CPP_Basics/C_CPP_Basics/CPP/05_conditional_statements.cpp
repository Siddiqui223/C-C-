/*
 * TOPIC: Conditional Statements in C++
 * ------------------------------------------
 * Same as C: if, if-else, else-if ladder, switch-case
 * PLUS: the ternary (conditional) operator ? : as a shortcut for if-else
 */

#include <iostream>
using namespace std;

int main() {
    int number = 15;

    // ---- if-else ----
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    // ---- else-if ladder ----
    int marks = 72;
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 75) {
        cout << "Grade: B" << endl;
    } else if (marks >= 50) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    // ---- switch-case ----
    int day = 3;
    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        default: cout << "Invalid day" << endl;
    }

    // ---- Ternary Operator: condition ? valueIfTrue : valueIfFalse ----
    int a = 10, b = 20;
    int larger = (a > b) ? a : b;   // shortcut for a simple if-else
    cout << "Larger value: " << larger << endl;

    return 0;
}

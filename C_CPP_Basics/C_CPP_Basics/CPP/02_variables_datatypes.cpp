/*
 * TOPIC: Variables and Data Types in C++
 * ---------------------------------------
 * C++ supports all the C data types PLUS a proper "bool" type
 * for true/false values, and "auto" for automatic type detection.
 */

#include <iostream>
using namespace std;

int main() {
    // ---- Basic Data Types ----
    int age = 21;                 // whole numbers
    float height = 5.9f;          // decimal numbers (less precision)
    double pi = 3.14159265;       // decimal numbers (more precision)
    char grade = 'A';             // single character
    bool isPassed = true;         // bool -> only true or false (C++ specific)

    // ---- Printing using cout ----
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPassed << endl;   // prints 1 for true, 0 for false

    // ---- auto keyword: compiler automatically figures out the type ----
    auto score = 95;        // compiler treats 'score' as int
    auto average = 78.5;    // compiler treats 'average' as double
    cout << "Score (auto): " << score << endl;
    cout << "Average (auto): " << average << endl;

    // ---- sizeof() still works the same as in C ----
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;

    return 0;
}
